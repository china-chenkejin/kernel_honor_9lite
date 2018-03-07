/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : drv_pmic_if.h
  �� �� ��   : ����
  ��    ��   :
  ��������   : 2012��10��10��
  ����޸�   :
  ��������   :
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2012��10��10��
    ��    ��   :
    �޸�����   : �����ļ�

******************************************************************************/

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/



#ifndef __DRV_PMIC_IF_H__
#define __DRV_PMIC_IF_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/
enum {
    pmu_id_v210 = 0x21,
    pmu_id_v220 = 0x22,
    pmu_id_v230 = 0x23,
    pmu_id_v240 = 0x24,
};

/*****************************************************************************
  4 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  6 STRUCT����
*****************************************************************************/


/*****************************************************************************
  7 UNION����
*****************************************************************************/


/*****************************************************************************
  8 OTHERS����
*****************************************************************************/


/*****************************************************************************
  9 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/
extern unsigned int pmu_get_version(void);

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif
