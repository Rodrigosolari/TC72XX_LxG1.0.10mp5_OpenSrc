/***************************************************************************
 *     Copyright (c) 1999-2012, Broadcom Corporation
 *     All Rights Reserved
 *     Confidential Property of Broadcom Corporation
 *
 *
 * THIS SOFTWARE MAY ONLY BE USED SUBJECT TO AN EXECUTED SOFTWARE LICENSE
 * AGREEMENT  BETWEEN THE USER AND BROADCOM.  YOU HAVE NO RIGHT TO USE OR
 * EXPLOIT THIS MATERIAL EXCEPT SUBJECT TO THE TERMS OF SUCH AN AGREEMENT.
 *
 * $brcm_Workfile: $
 * $brcm_Revision: $
 * $brcm_Date: $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Wed Nov 14 03:20:40 2012
 *                 MD5 Checksum         d41d8cd98f00b204e9800998ecf8427e
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: $
 *
 ***************************************************************************/

#ifndef BCHP_SHAREDMEM_GB_H__
#define BCHP_SHAREDMEM_GB_H__

/***************************************************************************
 *SharedMem_GB
 ***************************************************************************/

/***************************************************************************
 *SharedMemRAM%i - Shared memory space.
 ***************************************************************************/
#define BCHP_SharedMem_GB_SharedMemRAMi_ARRAY_BASE                 0x104b4000
#define BCHP_SharedMem_GB_SharedMemRAMi_ARRAY_START                0
#define BCHP_SharedMem_GB_SharedMemRAMi_ARRAY_END                  4095
#define BCHP_SharedMem_GB_SharedMemRAMi_ARRAY_ELEMENT_SIZE         32

/***************************************************************************
 *SharedMemRAM%i - Shared memory space.
 ***************************************************************************/
/* SharedMem_GB :: SharedMemRAMi :: Data [31:00] */
#define BCHP_SharedMem_GB_SharedMemRAMi_Data_MASK                  0xffffffff
#define BCHP_SharedMem_GB_SharedMemRAMi_Data_SHIFT                 0


#endif /* #ifndef BCHP_SHAREDMEM_GB_H__ */

/* End of File */