//File: offset.h

#ifndef __OFFSET_H__
#define __OFFSET_H__
///////////////////////////////////////////////////////////////////////////////

#define SENSOR_START_REG						0xF0F00300L		//���ò���Sensor����ʼ�Ĵ������

#define SENSOR_I2C_OPERATE						0xF0F003A0L		//��SENSOR�Ĵ��������ĵ�ַ

#define FORMAT7_DCAM_ADDR						0xF1F00000L

#define REG_CAMERA_COLUMN_SKIP_CTL				0xF0F008DCL //���� 
#define REG_CAMERA_ROW_SKIP_CTL					0xF0F008E0L //����  
#define REG_CAMERA_ROW_BIN_MODE					0xF0F00350L      //�е���
#define REG_CAMERA_COL_BIN_MODE					0xF0F00354L      //�е��� 

#define TRIGGER_ON_OFF				0x02000000
#define TRIGGER_MODE				0xF0F00830L
#define TRIGGER_POLARITY			0x01000000
#define ALL_TRIGGER_MODE			0x000F0000L		//TRIGGER mode:0x830[12:15]
#define TRIGGER_MODE_0			    0x00000000L		//
#define TRIGGER_MODE_1			    0x00010000L		//��ƽ����
#define TRIGGER_MODE_14             0x000E0000L		//�Զ���ĸ߾��ȴ���	//QiaoJH,2006.2.15

#define CCD_STROBE_POLARITY_START_ADDR	 0xF3F00300L		//Strobe�������õ���ʼ��ַ,ƫ��0����ѯ��ƫ��100����ѯStrobe0;ƫ��200������Strobe0
#define CCD_LUT_ADDR					 0xF5F00000L		//LUT������ַ
#define CCD_STROBE0_SET_ADDR					0xF3F00500L    //����Ƽ���
#define CCD_Strobe_0_Cnt_On_Off					0x02000000L
#define CCD_Strobe_0_Cnt_Signal_Polarity		0x01000000L

//��ɫ�ڵ�ƽ����
#define REG_CAMERA_GREEN1_BRIGHTNESS_CTL		0xF0F008E4L     //��һ
#define REG_CAMERA_GREEN2_BRIGHTNESS_CTL		0xF0F008E8L     //�̶�
#define REG_CAMERA_BLUE_BRIGHTNESS_CTL			0xF0F008ECL     //��ɫ
#define REG_CAMERA_RED_BRIGHTNESS_CTL			0xF0F008F0L     //��ɫ 


#define GREEN1_GAIN								0xF0F008CCL     //��һ
#define GREEN2_GAIN								0xF0F008D0L     //�̶�
#define BLUE_GAIN								0xF0F008D4L     //��ɫ
#define RED_GAIN								0xF0F008D8L     //��ɫ

#define SHUTTER_UNIT							0xF0F0036CL

#define CCD_SOFT_TRIGGER			 			0xF0F0062CL		//DICAM1.31��׼�ж���
#define NOISE_CONTROL							0xF0F008C8L		//���10ѡ8����


#define PRODUCT_ENCRYPT							0xF2F00000L		//��Ʒ������,CCD Camera
#define CCD_FIRM_VERSION						0xF2F00028L		//ƫ��28������DSP Version
#define CCD_SENSOR_ID							0xF2F00040L		//���ʹ�õ�Sensor��ID������1205
#define CCD_TEST_IMG_ADDR						0xF2F0081CL     //������ڲ�����ͼ���ַ
#define CCD_STROBE_ON_OFF_ADDR					0xF3F00500L     //���������ƿɿ��ع��ܵ�ַ
#define CCD_8or12BitMode                        0xF1F00010L     //8λ12λͼ���ѡ��ַ
#define CCD_OUTPUTIO_0                          0xF3F00000L     //���IO_0��ַ
#define CCD_OUTPUTIO_1                          0xF3F00014L     //���IO_1��ַ
#define CCD_OUTPUTIO_2                          0xF3F00028L     //���IO_2��ַ
#define CCD_OUTPUTIO_CONTROL                    0xF3F00010L     //�û��Զ������IO���Ƶ�ַ
#define CCD_OUTPUTI1_CONTROL                    0xF3F00024L
#define CCD_OUTPUTI2_CONTROL                    0xF3F00038L
#define CCD_DELAY_TIME_ADDR                     0xF0F00834L     //�������ӳ��ع��ַ
#define CCD_FPGA_VERSION                        0xF2F00038L		//����FPGA Version
#define CCD_TRANSFERSDELAY_ADDR                 0xF2F00824L     //�ӳٴ����ַ
#define CCD_FILTER_TIME_ADDR	                0xF2F00850L     //�˲�ʱ��Ĵ�����ַ
#define CCD_LE_BE_MODE_ADDR						0xF2F00854L     //big-endian little-endian ��ַ

#define CCD_BLACK_CLAMP_LEVEL                   0xF3F00060L     //  for ��� test    
#define CCD_H1DRV                               0xF3F00064L
#define CCD_H2DRV                               0xF3F00068L
#define CCD_H3DRV                               0xF3F0006CL
#define CCD_H4DRV                               0xF3F00070L
#define CCD_RGDRV                               0xF3F00074L
#define CCD_H1POL                               0xF3F00078L
#define CCD_H1POSLOC                            0xF3F0007CL
#define CCD_RGPOL                               0xF3F00080L
#define CCD_RGPOSLOC                            0xF3F00084L
#define CCD_AD9849_SHPPOSLOC                    0xF3F00088L
#define CCD_AD9849_SHDPOSLOC                    0xF3F0008CL


//�Զ����ܶ�  AF(Automatic Function)
#define AF_CTRL_INQ                             0xFAF00000L
#define AF_AUTO_GAIN_CTRL_INQ                   0xFAF00100L     //�Զ�������Ʋ�ѯ
#define AF_AUTO_SHUTTER_CTRL_INQ                0xFAF00104L     //�Զ��ع���Ʋ�ѯ
#define AF_AREA_MAX_SIZE_INQ                    0xFAF00110L     //�Զ����ܸ���Ȥ���� ���Χ
#define AF_AREA_UNIT_SIZE_INQ                   0xFAF00114L     //�Զ����ܸ���Ȥ���� ����

#define AF_AUTO_STROBE_INQ                      0xFAF00120L
#define AF_AUTO_STROBE_SHUTTER_INQ              0xFAF00124L
#define AF_AUTO_STROBE_GAIN_INQ                 0xFAF00128L
#define AF_AUTO_STROBE_STAT_INQ                 0xFAF0012CL


#define AF_AUTO_GAIN_CTRL                       0xFAF00800L     //�Զ��������
#define AF_AUTO_SHUTTER_CTRL                    0xFAF00804L     //�Զ��ع����
#define AF_AUTO_SHUTTER_LO                      0xFAF00808L     //Minimum auto shutter value
#define AF_AUTO_SHUTTER_HI                      0xFAF0080CL     //Maximum auto shutter value
#define AF_AUTO_FNC_AOI                         0xFAF00810L     //�Զ�����AOI
#define AF_AF_AREA_POSITION                     0xFAF00814L     //�Զ�����AOIλ��
#define AF_AF_AREA_SIZE                         0xFAF00818L     //�Զ�����AOI��С

#define AF_AUTO_STROBE                          0xFAF00820L
#define AF_AUTO_STROBE_SHUTTER                  0xFAF00824L
#define AF_AUTO_STROBE_GAIN                     0xFAF00828L
#define AF_AUTO_STROBE_STAT                     0xFAF0082CL



///////�Զ�����������//////////////
#define  SPT_AUTO_GAIN_MAX_VALUE       1023
#define  SPT_AUTO_GAIN_MIN_VALUE       0

#define  SPT_AUTO_SHUTTER_MAX_VALUE     4000
#define  SPT_AUTO_SHUTTER_MIN_VALUE     20





//��Sensor��صļĴ����Ķ��壺
/* Micron MI-1300 SCCB registers */
#define	CHIPID			0x00


__inline DWORD BE2LE(DWORD x)
{
    return ((DWORD)( \
                     (((DWORD)(x) & (DWORD)0x000000ffUL) << 24) | \
                     (((DWORD)(x) & (DWORD)0x0000ff00UL) <<  8) | \
                     (((DWORD)(x) & (DWORD)0x00ff0000UL) >>  8) | \
                     (((DWORD)(x) & (DWORD)0xff000000UL) >> 24) ));\
}

//
// Reverse a word low 8 bits, and move to high 8 bits.
// Move original 8 bits to low 8 bits.
__inline WORD MAKEPASS(WORD wValue)
{
    WORD temp = ~(wValue & 0x00FF);
    return (wValue>>8) | (temp<<8);
}

///////////////////////////////////////////////////////////////////////////////
#endif //__OFFSET_H__