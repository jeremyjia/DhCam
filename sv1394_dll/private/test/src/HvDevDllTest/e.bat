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
set SVNROOT="http://192.168.10.30/svn/sw_module_interface/sv1394serial/trunk/private/test/src/HvDevDllTest"
set LOCALROOT="sdk_sample" 

::����Ŀ¼
rem mkdir %LOCALROOT% 

::����bin������
svn checkout %SVNROOT%/ ../e-HvDevDllTest 
 

   
@echo �û��ļ����ɣ����
::�������������-----------------------------------
rem pause

@echo on
