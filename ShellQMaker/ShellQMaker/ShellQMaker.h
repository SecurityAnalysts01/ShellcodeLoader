#pragma once
#include<windows.h>
#include "wx/wxprec.h"
#include <stdio.h>
#include <iostream>

typedef struct { DWORD size; PBYTE pbufr; }FILEINFO;
FILEINFO OpenfileA(char* ptrFile)
{
	DWORD dwReadTotal = 0;
	DWORD dwReaded = 0;
	FILEINFO fileinfo = { 0 };
	HANDLE hFile = NULL;
	hFile = CreateFileA(ptrFile, FILE_SHARE_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hFile == INVALID_HANDLE_VALUE)
		goto FAISE;
	fileinfo.size = GetFileSize(hFile, NULL);
	if (fileinfo.size == 0)
		goto FAISE;
	fileinfo.pbufr = (byte*)HeapAlloc(GetProcessHeap(), 0, fileinfo.size);
	if (fileinfo.pbufr == 0)
		goto FAISE;
	SecureZeroMemory(fileinfo.pbufr, fileinfo.size);

	while (dwReadTotal < fileinfo.size
		&& ReadFile(hFile, fileinfo.pbufr + dwReadTotal, fileinfo.size - dwReadTotal, &dwReaded, NULL))
	{
		dwReadTotal += dwReaded;
	}
FAISE:
	if (hFile != INVALID_HANDLE_VALUE)
	{
		CloseHandle(hFile);
	}
	return fileinfo;
};

void* MMcpy(void* dst, const void* src, size_t len)
{
	char* ch_dst = (char*)dst;
	char* ch_src = (char*)src;
	if (NULL == ch_dst || NULL == ch_src) {
		return NULL;
	}

	void* rest = ch_dst;

	if (ch_dst <= ch_src || (char*)ch_dst >= (char*)ch_src + len) {
		while (len--) {
			*(char*)ch_dst = *(char*)ch_src;
			ch_dst = (char*)ch_dst + 1;
			ch_src = (char*)ch_src + 1;
		}
	}
	else {
		ch_src = (char*)ch_src + len - 1;
		ch_dst = (char*)ch_dst + len - 1;
		while (len--) {
			*(char*)ch_dst = *(char*)ch_src;
			ch_dst = (char*)ch_dst - 1;
			ch_src = (char*)ch_src - 1;
		}
	}
	return rest;
}


BOOL Writetofile(PBYTE file, DWORD contentLen, PCHAR path)
{

	HANDLE pFile;
	PBYTE tmpBuf = nullptr;
	DWORD dwBytesWrite, dwBytesToWrite;
	pFile = CreateFileA(path, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (pFile == INVALID_HANDLE_VALUE)
	{
		CloseHandle(pFile);
		HeapFree(GetProcessHeap(), 0, file);
		return FALSE;
	}
	dwBytesToWrite = contentLen;
	dwBytesWrite = 0;
	tmpBuf = file;
	do {
		WriteFile(pFile, tmpBuf, dwBytesToWrite, &dwBytesWrite, NULL);
		dwBytesToWrite -= dwBytesWrite;
		tmpBuf += dwBytesWrite;

	} while (dwBytesToWrite > 0);

	CloseHandle(pFile);
	HeapFree(GetProcessHeap(), 0, file);
	return TRUE;
}
