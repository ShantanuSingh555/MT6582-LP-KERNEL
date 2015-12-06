/*****************************************************************************
 *
 * Filename:
 * ---------
 *   camera_sensor_para.h
 *
 * Project:
 * --------
 *   DUMA
 *
 * Description:
 * ------------
 *   Header file of Sensor tuning parameters that should be generated by CCT
 *
 *
 * Author:
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 * 05 25 2010 sean.cheng
 * [ALPS00001357][Meta]CameraTool 
 *
 * Mar 4 2010 mtk70508
 * [DUMA00154792] Sensor driver
 * 
 *
 * Feb 24 2010 mtk01118
 * [DUMA00025869] [Camera][YUV I/F & Query feature] check in camera code
 * 
 *
 * Apr 7 2009 mtk02204
 * [DUMA00004012] [Camera] Restructure and rename camera related custom folders and folder name of came
 * 
 *
 * Feb 24 2009 mtk02204
 * [DUMA00001084] First Check in of MT6516 multimedia drivers
 * 
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef _OV9760_CAMERA_SENSOR_PARA_H
#define _OV9760_CAMERA_SENSOR_PARA_H
	 
#define OV9760_CAMERA_SENSOR_REG_DEFAULT_VALUE \
	 { \
	   {0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF}, \
	   {0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF}, \
	   {0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF}, \
	   {0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF}, \
	   {0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF}, \
	   {0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF}, \
	   {0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF}, \
	   {0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF}, \
	   {0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF}, \
	   {0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,ISP_DRIVING_2MA}, \
	 }
	 
#define OV9760_CAMERA_SENSOR_CCT_DEFAULT_VALUE \
	 { \
	   {0xFFFFFFFF,0x40},{0xFFFFFFFF,0x40},{0xFFFFFFFF,0x40},{0xFFFFFFFF,0x40},{0xFFFFFFFF,0x40}, \
	 }
	 
#endif /* __CAMERA_SENSOR_PARA_H */
	 /* SENSOR FULL SIZE */


