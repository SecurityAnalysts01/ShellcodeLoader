# Shellcode Maker
语言: [中文](readme_cn.md)

ShellQMaker of windows can bypass Norton、Bitdefender、360、Panda.


## do list

Environment: The loader templates uses QT to implement, the generator and loader templates are developed with C + +, and statically compiled by VS2022.

Currently it only has one loading modes,Other loading modes are in development.
 
 Methods: Use vs2022 to open the project solution (. sln), and then compile.Of course,You can download the product from [realse]() .
 
## Files

  The tool is composed of a generator(ShellQMaker.exe) and Load template file(loading.exe).The generator (ShellQMaker.exe) writes different shellcodes into the loaded template file(loading.exe) to generate different executable files.

<img src="Readme/ShellQMaker-Files-001.png" alt="image-20221124160121278" style="zoom:80%;" />

## Instructions

**ShellQMaker**

![image-20221130105542851](Readme/shellQMaker-Instructions-001.png)

**ShellQMaker (your shellcode) (executable files)**

![image-20221130105542851](Readme/shellQMaker-Instructions-002.png)

**The final loader will be generated.**

![image-20221130105542851](Readme/shellQMaker-Instructions-003.png)

## Result


