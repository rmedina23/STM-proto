/**
  ******************************************************************************
  * @file    JPEG/MJPEG_VideoDecodingFromQSPI/Inc/decode_dma.h
  * @author  MCD Application Team
  * @version V0.5.0
  * @date    18-February-2017  
  * @brief   Header for decode_dma.c module
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __DECODE_DMA_H
#define __DECODE_DMA_H

/* Includes ------------------------------------------------------------------*/
#include "main.h"


/* Exported variables --------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
enum
{
  DECODE_COMPLETE_EVENT     = 0x10
, DECODE_ERROR_EVENT
};

/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
uint32_t JPEG_Decode_Init(JPEG_HandleTypeDef *hjpeg);
void JPEG_Decode_DeInit(JPEG_HandleTypeDef *hjpeg);
uint32_t JPEG_Decode_DMA(JPEG_HandleTypeDef *hjpeg, uint32_t FrameSourceAddress ,uint32_t FrameSize, uint32_t DestAddress);

#endif /* __DECODE_DMA_H */
