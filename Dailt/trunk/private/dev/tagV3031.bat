@echo off
::-----------------------------------------------
::ע������
::-----------------------------------------------

@echo �û��ļ����ɿ�ʼ

Title [sv_trunk], ���ڽ���...


::���������ʼ-----------------------------------
set SVN_HOME=F:\xd\exe\svn-win32-1.4.6
set path=%path%;%SVN_HOME%\bin
set LANG=zh_CN.UTF8
set APR_ICONV_PATH=%SVN_HOME%\iconv
set SVNROOT="http://192.168.10.30/svn/sw_hvdailt/tag/private/v3.0.3.1"
set LOCALROOT="sdk_sample" 

::����Ŀ¼
rem mkdir %LOCALROOT% 

::����bin������
svn checkout %SVNROOT%/ ..\..\..\hvdailt_v3031
@echo �û��ļ����ɣ����
::�������������-----------------------------------
pause

@echo on
