@echo off
::-----------------------------------------------
::ע������
::-----------------------------------------------

@echo �û��ļ����ɿ�ʼ

Title �û��ļ����ɣ����ڽ���...


::���������ʼ-----------------------------------
set SVN_HOME=F:\xd\exe\svn-win32-1.4.6
set path=%path%;%SVN_HOME%\bin
set LANG=zh_CN.UTF8
set APR_ICONV_PATH=%SVN_HOME%\iconv
set SVNROOT="http://192.168.0.18/svn/st_hvapi2/branches/HvTest/HvApiTest"
set LOCALROOT="sdk_sample" 

::����Ŀ¼
rem mkdir %LOCALROOT% 

::����bin������
svn export %SVNROOT%/private/VC/Inc ..\HvApiTest_BK


 
rem rmdir temp /s /q
 

   
@echo �û��ļ����ɣ����
::�������������-----------------------------------
pause

@echo on
