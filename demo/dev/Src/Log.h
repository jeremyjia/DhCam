//��־�ļ�

//2006.8.17 HYL��


//2006.8.17 �汾����Ϊv2.4.0.7
//ȥ���˺ڰ�������İ�ƽ���������
//��Ӻ� IS_NOT_SV_COLOR
////	m_View.SetNewAOI(); //ȥ��˫��Ч�� HYL 2006.8.17 

//2006.8.21 �汾����Ϊv2.4.0.8
//ͳһSVϵ�е����Բ�����Ĭ��ֵ���ɵ���Χ
/*
DH-SV1300FC/FM:
����	
DH-SV1300FM�ڰ����								DH-SV1300FC��ɫ���
				Ĭ��ֵ			ȡֵ��Χ		Ĭ��ֵ			ȡֵ��Χ
�����ٶ�		133ms			20us~1s			133ms			20us~1s
�ɼ���ʽ		continuation	continuation��	continuation	continuation
								trigger��						trigger
								trigger level					trigger level
�ⴥ���źż���	High			High��Low		High			High��Low
������źż���	High			High��Low		High			High��Low
����			296				0~1023			296				0~1023
LUT�ļ�			3~10			0~7��1~8��		3~10			0~7��1~8��
								2~9��3~10��						2~9��3~10��
								4~11							4~11
���ȵ���		16				0~255			16				0~255
��ƽ��U/B		��				��				28				0~31
��ƽ��V/R		��				��				14				0~31
����			1600			1600~4092		1600			1600~4092
֡����			off				off��on			off				off��on
*/

/*
DH-SV1310FC/FM:
����	
DH-SV1300FM�ڰ����								DH-SV1300FC��ɫ���
				Ĭ��ֵ			ȡֵ��Χ		Ĭ��ֵ			ȡֵ��Χ
�����ٶ�		60ms			20us~1s			60ms			20us~1s
�ɼ���ʽ		continuation	continuation��	continuation	continuation
								trigger��						trigger
								trigger level					trigger level
�ⴥ���źż���	High			High��Low		High			High��Low
������źż���	High			High��Low		High			High��Low
����			296				0~1023			296				0~1023
LUT�ļ�			3~10			0~7��1~8��		3~10			0~7��1~8��
								2~9��3~10��						2~9��3~10��
								4~11							4~11
���ȵ���		16				0~255			16				0~255
��ƽ��U/B		��				��				28				0~31
��ƽ��V/R		��				��				14				0~31
����			2500			2500~4092		2500			2500~4092
֡����			off				off��on			off				off��on
*/


//2006.9.11 �汾����Ϊv2.4.0.9
//��Ӻ� IS_HV1300
//֧��HV1300FC