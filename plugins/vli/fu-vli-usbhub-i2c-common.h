/*
 * Copyright (C) 2017-2019 VIA Corporation
 * Copyright (C) 2019 Richard Hughes <richard@hughsie.com>
 *
 * SPDX-License-Identifier: LGPL-2.1+
 */

#pragma once

#include "fu-plugin.h"

typedef enum {
	FU_VLI_USBHUB_I2C_STATUS_OK		= 0x00,
	FU_VLI_USBHUB_I2C_STATUS_HEADER		= 0x51,
	FU_VLI_USBHUB_I2C_STATUS_COMMAND	= 0x52,
	FU_VLI_USBHUB_I2C_STATUS_ADDRESS	= 0x53,
	FU_VLI_USBHUB_I2C_STATUS_PACKETSIZE	= 0x54,
	FU_VLI_USBHUB_I2C_STATUS_CHECKSUM	= 0x55,
} FuVliUsbhubI2cStatus;

/* Texas Instruments BSL */
#define FU_VLI_USBHUB_I2C_ADDR_WRITE		0x18
#define FU_VLI_USBHUB_I2C_ADDR_READ		0x19

#define FU_VLI_USBHUB_I2C_CMD_WRITE		0x32
#define FU_VLI_USBHUB_I2C_CMD_READ_STATUS	0x33
#define FU_VLI_USBHUB_I2C_CMD_UPGRADE		0x34
#define FU_VLI_USBHUB_I2C_CMD_READ_VERSIONS	0x40

#define FU_VLI_USBHUB_I2C_R_VDR			0xa0	/* read vendor command */
#define FU_VLI_USBHUB_I2C_W_VDR			0xb0	/* write vendor command */

gboolean	 fu_vli_usbhub_i2c_check_status		(FuVliUsbhubI2cStatus	 status,
							 GError			**error);
