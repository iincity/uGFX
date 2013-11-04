/*
 * This file is subject to the terms of the GFX License. If a copy of
 * the license was not distributed with this file, you can obtain one at:
 *
 *              http://ugfx.org/license.html
 */

/**
 * @file    drivers/gdisp/SSD2119/gdisp_lld_config.h
 * @brief   GDISP Graphic Driver subsystem low level driver header for the SSD2119 display.
 *
 * @addtogroup GDISP
 * @{
 */

#ifndef _GDISP_LLD_CONFIG_H
#define _GDISP_LLD_CONFIG_H

#if GFX_USE_GDISP

/*===========================================================================*/
/* Driver hardware support.                                                  */
/*===========================================================================*/

#define GDISP_HARDWARE_STREAM_WRITE		TRUE
#define GDISP_HARDWARE_STREAM_READ		TRUE
#define GDISP_HARDWARE_STREAM_POS		TRUE
#define GDISP_HARDWARE_CONTROL			TRUE

#if defined(GDISP_USE_DMA)
	#define GDISP_HARDWARE_FILLS		TRUE
	#define GDISP_HARDWARE_BITFILLS		TRUE
#endif

#define GDISP_LLD_PIXELFORMAT			GDISP_PIXELFORMAT_RGB565

#endif	/* GFX_USE_GDISP */

#endif	/* _GDISP_LLD_CONFIG_H */
/** @} */
