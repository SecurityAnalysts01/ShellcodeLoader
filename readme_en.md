# Shellcode Maker
Universal shellcode generator of Windows can bypass AV .

语言: [中文](readme.md)

shellcodemaker-Injection-Bypass of windows can bypass Microsoft Defender、360、HuoRong、Panda.


## Features

Environment: The loader templates uses QT to implement, the generator and loader templates are developed with C + +, and statically compiled by VS2022.

Currently it only has one loading modes,Other loading modes are in development.

As of the release date, the project is exempt from killing mainstream antivirus software at home and abroad;
 
Methods: Use vs2022 to open the project solution (. sln), and then compile.Of course,You can download the product from [realse]() .
 
## Project Files

  The tool is composed of a generator(ShellQMaker.exe) and Load template file(loading.exe).The generator (ShellQMaker.exe) writes different shellcodes into the loaded template file(loading.exe) to generate different executable files.

<img src="Readme/ShellQMaker-Files-001.png" alt="image-20221124160121278" style="zoom:80%;" />

## Instructions

**execute ShellQMaker to view the help**

![image-20221130105542851](Readme/shellQMaker-Instructions-001.png)

**get download.dat**

![image-20221130105542851](Readme/shellQMaker-Instructions-002.png)

**ShellQMaker (your shellcode) (executable files)**

![image-20221130105542851](Readme/shellQMaker-Instructions-003.png)

**The final executable evasion program will be generated.**

![image-20221130105542851](Readme/shellQMaker-Instructions-004.png)

## Result

360

![image-20221130105542851](Readme/Result-01.png)

HUORONG

![image-20221130105542851](Readme/Result-02.png)

Microsoft Defender（Only the download.dat file that stores the shellcode is killed）

![image-20221130105542851](Readme/Result-03.png)
