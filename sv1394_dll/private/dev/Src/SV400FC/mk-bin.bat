@echo off
::-----------------------------------------------
::[mk-bin.bat]˵��:
::���ļ�Ϊ�˵���SV400FC����������,�ɴ�SVN���Զ�Export����ļ����������������ļ�,
:: �������SVN��Ŀǰû�� LUT ����ļ�,�ʴӱ��� Export.
:: by HYL
:: 2008.12.23 Tue
::-----------------------------------------------

@echo �û��ļ����ɿ�ʼ

rem �����Ŀ¼!
for /r %%a in ( bin ) do  rd /s /q %%a
Title �û��ļ����ɣ����ڽ���...


::���������ʼ-----------------------------------
set SVN_HOME=F:\xd\exe\svn-win32-1.4.6
set path=%path%;%SVN_HOME%\bin
set LANG=zh_CN.UTF8
set APR_ICONV_PATH=%SVN_HOME%\iconv 


set HVPERF="http://192.168.10.30/svn/sw_demo/hvperf/trunk/public"
set IConvert="http://192.168.10.30/svn/sw_plugins/IConvert/tag/public/v1.0.1.5/bin_cn/"
set LUT="file:///D:/work/LcSvn/idx/bin/Lut"
set HVDAILT="http://192.168.10.30/svn/sw_module_interface/hvdailt/trunk/public"
set HVAPI="http://192.168.10.30/svn/sw_module_interface/hvapi/trunk/public"
set SVFX="http://192.168.10.30/svn/sw_module_interface/sv1394serial/trunk/public"
set SYS="http://192.168.10.30/svn/sw_driver/1394sys/trunk/public"
set Raw2RGB="http://192.168.10.30/svn/sw_imgproclib/Raw2rgb/trunk/public"
set HVUTIL="http://192.168.10.30/svn/sw_module_interface/hvdailt/trunk/private/ref/ALD2DH/080530test"

set HVAPITEST="http://192.168.10.30/svn/sw_module_interface/sv1394serial/trunk/private/test/src/HvApiTest/Debug"
set DBGVIEW="http://192.168.10.30/svn/sw_module_interface/sv1394serial/trunk/private/ref/Tools"

svn export %HVPERF% 	HVPERF
svn export %IConvert% 	IConvert
svn export %LUT% 	LUT0
svn export %HVDAILT% 	HVDAILT
svn export %HVAPI% 	HVAPI
svn export %SVFX%  	SVFX 
svn export %SYS%  	SYS  
svn export %Raw2RGB%	Raw2RGB
svn export %HVUTIL%	HVUTIL

svn export %HVAPITEST%	HVAPITEST
svn export %DBGVIEW%	DBGVIEW


rem ����Ŀ¼!
MD bin
MD bin\PlugIns
MD bin\Lut

copy HVPERF\HVPerf_cn.exe 		bin\HVPerf_cn.exe
copy IConvert\IConvert.plx		bin\PlugIns\IConvert.plx
copy LUT0\*.*				bin\LUT\*.*
copy HVDAILT\HVDAILT.dll 		bin\HVDAILT.dll
copy HVAPI\HVAPI.dll 			bin\HVAPI.dll
copy SVFX\SV400FC.dll			bin\SV400FC.dll
copy SYS\SV400FC.sys			bin\SV400FC.sys
copy SYS\SV400FC.inf			bin\SV400FC.inf

copy Raw2RGB\Raw2RGb.dll		bin\Raw2RGB.dll
copy HVUTIL\HVUtil.dll			bin\HVUtil.dll


copy HVAPITEST\HVAPITEST.exe		bin\HVAPITEST.exe
copy DBGVIEW\DbgviewXP.exe		bin\DbgviewXP.exe
 
rem rmdir temp /s /q
 
rem ������Ŀ¼!
  for /r %%a in ( HVPERF HVDAILT HVAPI SVFX SYS Raw2RGB HVUTIL IConvert LUT0 HVAPITEST DBGVIEW) do  rd /s /q %%a


   
@echo �û��ļ����ɣ����
::�������������-----------------------------------
rem pause

@echo on
