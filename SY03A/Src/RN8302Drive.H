/************************************************************************
* ��Ȩ���� (C)2016, �����������ܿƼ��ɷ����޹�˾��
*
* �ļ����ƣ� // RN8302Drive.H
* �ļ���ʶ�� // RN8302���������ļ�ͷ
* ����ժҪ�� // 
* ����˵���� //
* ��ǰ�汾�� // V01.00
* �� �ߣ� // yangxing
* ������ڣ� // 2016��08��06��
*
* �޸ļ�¼1��//
* �޸����ڣ�
* �� �� �ţ�
* �� �� �ˣ�
* �޸����ݣ�
************************************************************************/
#ifdef	RN8302Drive_H
#define	RN8302Drive_EXT
#else
#define	RN8302Drive_EXT extern
#endif
#include "V85XX.h"




extern void RN8302_SPI_Init(void);
extern void RN8302_Delay( unsigned long n );
extern void RN8302_Read( unsigned char *RAM_Addr, unsigned int ADE78xx_Addr, unsigned char Lenth );
extern void RN8302_Write( unsigned int ADE78xx_Addr, unsigned char *RAM_Addr, unsigned char Lenth );