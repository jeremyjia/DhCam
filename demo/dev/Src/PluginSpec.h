// PluginSpec.h: interface for the PluginSpec class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PLUGINSPEC_H__1B33C703_2E35_4997_829A_335FFA7D3A1F__INCLUDED_)
#define AFX_PLUGINSPEC_H__1B33C703_2E35_4997_829A_335FFA7D3A1F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


/**The different image storage formats supported.*/
enum IMAGEFORMAT
{
    FORMAT_Mono8 = 0,     ///< Y component has 8bit data
	FORMAT_YUV8_4_1_1,    ///< 4:1:1 YUV 8 format, each component has 8bit data
	FORMAT_YUV8_4_2_2,    ///< 4:2:2 YUV 8 format, each component has 8bit data
	FORMAT_YUV8_4_4_4,    ///< 4:4:4 YUV 8 format, each component has 8bit data
	FORMAT_RGB8,          ///< RGB 8 format, each component has 8bit data
	FORMAT_Mono16,        ///< Y component has 16bit data
	FORMAT_RGB16          ///< RGB 16 format, each component has 16bit data
};


struct CImageInfo {
	unsigned long ImageWidth;       // Image width in pixel
    unsigned long ImageHeight;      // Image height in pixel
    unsigned long ImageBitDepth;    // Image depth in bits (8,16,24,32)
    unsigned long ImageBitDepthReal;// Precise Image depth (x bits)
    unsigned long ImageSizeBytes;   // Size used to store one image.
    IMAGEFORMAT ImageFormat;       // Planar, Packed, color or mono

};



struct CImageData {
	void	*pRawBuffer;
	void	*pImageBuffer;
};



struct CCamera {
	HANDLE	hDevice;
	char	*pName;
};


struct CManager {
	HANDLE	hWndParent;
	HANDLE	hMenu;
	char	*pRegistryPath;
};

/****************CImageInfo V1.1***************/
struct CImageV11Info {
	unsigned long iV11Size;		//���ṹ�Ĵ�С�����ֽڼƣ�
	HV_COLOR_CODE iV11ColorCode;	//ͼ������ݸ�ʽ
	unsigned long iV11Width;		//ͼ��Ŀ��
	unsigned long iV11Height;	//ͼ��ĸ߶�
	unsigned long iV11BitCount;	//ͼ���ÿ��������ռλ��
	unsigned long iV11DataDepth;	//ͼ���ÿ��������ռ��Чλ��
	unsigned long iV11PixelNumber;	//ͼ���������
	unsigned long iV11SizeImage;	//ͼ��Ĵ�С�����ֽڼƣ�
};

struct CConvertImageInfo {
	unsigned long ciiSize;		//���ṹ�Ĵ�С�����ֽڼƣ�
	CImageV11Info ciiDest;	//Ŀ��ͼ���������Ϣ
	CImageV11Info ciiSrce;	//Դͼ���������Ϣ
};

struct CConvertImageData {
	unsigned long cidSize;		//���ṹ�Ĵ�С�����ֽڼƣ�
	void *pCidDest;	//ָ��Ŀ��ͼ������ݻ�����
	void *pCidSrce;	//ָ��Դͼ������ݻ�����
};


/******************************************/

/* By C++ language compiler */
#ifdef __cplusplus
extern "C" {
#endif


/*------------------------- Standard 1.0 ----------------------------*/
typedef HANDLE (__stdcall PLUGIN_CreateObject )();
typedef void (__stdcall PLUGIN_DestoryObject)(HANDLE );

typedef void (__stdcall PLUGIN_GetName)(HANDLE, char*);
typedef void (__stdcall PLUGIN_GetInfo)(HANDLE, char*);
typedef DWORD (__stdcall PLUGIN_GetSpecVersion)(HANDLE);

typedef void (__stdcall PLUGIN_Initialize)(HANDLE, CCamera, CManager);
typedef void (__stdcall PLUGIN_Uninitialize)(HANDLE);
typedef bool (__stdcall PLUGIN_OnUserCommand)(HANDLE, unsigned int id);
typedef void (__stdcall PLUGIN_OnManagerNotify)(HANDLE, CImageInfo);
typedef void (__stdcall PLUGIN_OnStartGrabbing)(HANDLE, CImageInfo);
typedef void (__stdcall PLUGIN_OnStopGrabbing)(HANDLE, CImageInfo, CImageData);
typedef void (__stdcall PLUGIN_OnShowFrame)(HANDLE, CImageInfo, CImageData);

typedef void (__stdcall PLUGIN_OnPaletteSetting)(HANDLE, void *PalEntry);

/*------------------------- Standard v1.1 ----------------------------*/
typedef void (__stdcall PLUGINV11_OnManagerNotify)(HANDLE, CConvertImageInfo *);	//0409
typedef void (__stdcall PLUGINV11_OnStartGrabbing)(HANDLE, CConvertImageInfo*);
typedef void (__stdcall PLUGINV11_OnStopGrabbing)(HANDLE, CConvertImageInfo*, CConvertImageData*);
typedef void (__stdcall PLUGINV11_OnShowFrame)(HANDLE, CConvertImageInfo*, CConvertImageData*);

/* extern "C" { */
#ifdef __cplusplus
}
#endif


#endif // !defined(AFX_PLUGINSPEC_H__1B33C703_2E35_4997_829A_335FFA7D3A1F__INCLUDED_)
