/*
 * SPDX-FileCopyrightText: Copyright (c) 2026 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file usbhs_pic32cz_ca.h
 * @brief Generic USBHS register macros for PIC32CZ_CA family.
 *
 * This file defines USBHS register bit macros that the generated device
 * headers omit for Microchip PIC32CZ_CA devices. The USBHS PHY is identical
 * to PIC32CK, but the PIC32CZ_CA ATDF leaves USBHS_PHY24 bit 1 unnamed, so the
 * generated headers do not provide USBHS_PHY24_VBUSDETEN. Define it here for
 * use in the MUSB USBHS G1 driver.
 *
 */

#ifndef MICROCHIP_COMMON_USBHS_PIC32CZ_CA_H_
#define MICROCHIP_COMMON_USBHS_PIC32CZ_CA_H_


#define USBHS_PHY24_VBUSDETEN_Pos _UINT32_(1)
#define USBHS_PHY24_VBUSDETEN_Msk (_UINT32_(0x1) << USBHS_PHY24_VBUSDETEN_Pos)

#endif /* MICROCHIP_COMMON_USBHS_PIC32CZ_CA_H_ */
