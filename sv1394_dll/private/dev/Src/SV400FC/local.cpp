#include "..\common\CAMOBJ.h"
#include "LOCAL.h"
#include "math.h"

DEFINE_GUID(GUID_1394_XDCMU1, 
			0x4007067, 0x789b, 0x40aa, 0x8c, 0x80, 0xe8, 0x5e, 0x21, 0x2f, 0x13, 0xca);
            //     F C     

#define EXPORT_(b)		HV ## b

#define Device_Enumerate	EXPORT_(Enumerate)
#define Device_Open			EXPORT_(Open)
#define Device_Guid			EXPORT_(Guid) 
#define Device_Close		EXPORT_(Close)
#define Device_Control		EXPORT_(Control)

extern "C" BOOL __stdcall Device_Enumerate(HV_DEVICE_INTERFACE *pDeviceInterface, 
									  DWORD cb,
									  DWORD *cbNeeded)
{ 
	bool bRet = false;
	
	//��ȡ�豸����
	int nDevice = 0;
	do{
		HV_DEVICE_INTERFACE devIF;
		if(All_Enumerate(nDevice,&devIF,GUID_1394_XDCMU1)){
			nDevice++;
		}
		else{
			break;
		}
	}while(1);
	
	*cbNeeded = nDevice * sizeof (HV_DEVICE_INTERFACE);
	
	if(NULL == pDeviceInterface)
	{
		return true;
	}
	
	if(nDevice>0)//������һ���豸����
	{ 
		//ȡ�������豸���б�				 
		HV_DEVICE_INTERFACE *pCurrent = pDeviceInterface;		
		for(int i = 0; i < nDevice; i++)
		{    
			if ( pCurrent && ( cb >= *cbNeeded) )
			{
				HV_DEVICE_INTERFACE devIF;
				if(All_Enumerate(i,&devIF,GUID_1394_XDCMU1)){
					strcpy(pCurrent->szDevicePath, devIF.szDevicePath); 
					pCurrent->ClassGUID = GUID_1394_XDCMU1;
					pCurrent->Reserved = SV400FCTYPE;
					
					++pCurrent;
					bRet = TRUE;
				}
				else{
					bRet = FALSE;
					break;
				}  
			}		
		}		 		
	} 
	
	return bRet;
}
extern "C" void __stdcall Device_Guid(GUID *pGuid)
{
	*pGuid = GUID_1394_XDCMU1;
}

extern "C" HVSTATUS __stdcall Device_Open(char *DevicePath, 
										   GUID *pGuid, 
										   HANDLE *phCamera)
{
	HVSTATUS status = STATUS_OK;
	
	status = All_Open(DevicePath,phCamera,pGuid,GUID_1394_XDCMU1);

	return status;
}

extern "C" HVSTATUS __stdcall Device_Close(HANDLE hCamera)
{
	HVSTATUS status = STATUS_OK;

	status = All_Close(hCamera);

	return status;
}

extern "C" HVSTATUS __stdcall Device_Control(
				HANDLE hCamera, HV_CONTROL_CODE code, 
				void *pInBuffer, DWORD nInBufferSize, 
				void *pOutBuffer, DWORD nOutBufferSize,
				DWORD *pBytesReturned)

{
	HVSTATUS status = STATUS_OK;
	PCAMOBJ pCamObj = (PCAMOBJ) GlobalLock(hCamera);
	
	if(pCamObj->phCamera==NULL)
	{
		status=STATUS_DEVICE_HANDLE_INVALID;
		return status;
	} 
	
	CCamera* pMyCam = ToClass(pCamObj->pCam);
	status = pMyCam->ALL_Ctrl(code,pInBuffer,nInBufferSize,pOutBuffer,nOutBufferSize,pBytesReturned);

	GlobalUnlock(pCamObj);
	return status;
}

 

