/*
 * Copyright (C) 2006-2018, Marvell International Ltd.
 *
 * This software file (the "File") is distributed by Marvell International
 * Ltd. under the terms of the GNU General Public License Version 2, June 1991
 * (the "License").  You may use, redistribute and/or modify this File in
 * accordance with the terms and conditions of the License, a copy of which
 * is available by writing to the Free Software Foundation, Inc.
 *
 * THE FILE IS DISTRIBUTED AS-IS, WITHOUT WARRANTY OF ANY KIND, AND THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE
 * ARE EXPRESSLY DISCLAIMED.  The License provides additional details about
 * this warranty disclaimer.
 */

static unsigned char sc4_ddr_init[] = {
0x05,
0x00,
0x00,
0x00,
0x00,
0x00,
0x00,
0x00,
0xa4,
0x03,
0x00,
0x00,
0x2a,
0xbe,
0xad,
0x7e,
0x00,
0x00,
0x00,
0xa8,
0x01,
0x00,
0x00,
0x00,
0x00,
0x00,
0x00,
0x00,
0x5c,
0x48,
0x5b,
0x49,
0x04,
0x00,
0x00,
0x00,
0x10,
0xb5,
0xc0,
0xf8,
0x08,
0x00,
0x00,
0x00,
0xe0,
0x12,
0xef,
0x21,
0x0c,
0x00,
0x00,
0x00,
0xc0,
0xf8,
0x20,
0x13,
0x10,
0x00,
0x00,
0x00,
0x02,
0x21,
0xc0,
0xf8,
0x14,
0x00,
0x00,
0x00,
0x24,
0x13,
0x02,
0x01,
0x18,
0x00,
0x00,
0x00,
0x57,
0x49,
0x0a,
0x60,
0x1c,
0x00,
0x00,
0x00,
0x00,
0x21,
0x56,
0x4b,
0x20,
0x00,
0x00,
0x00,
0xc0,
0x3b,
0x19,
0x60,
0x24,
0x00,
0x00,
0x00,
0x54,
0x4b,
0x1b,
0x1d,
0x28,
0x00,
0x00,
0x00,
0x1a,
0x60,
0x53,
0x4b,
0x2c,
0x00,
0x00,
0x00,
0xbc,
0x3b,
0x19,
0x60,
0x30,
0x00,
0x00,
0x00,
0x51,
0x4b,
0x08,
0x33,
0x34,
0x00,
0x00,
0x00,
0x1a,
0x60,
0x50,
0x4b,
0x38,
0x00,
0x00,
0x00,
0xb8,
0x3b,
0x19,
0x60,
0x3c,
0x00,
0x00,
0x00,
0x4e,
0x4b,
0x0c,
0x33,
0x40,
0x00,
0x00,
0x00,
0x1a,
0x60,
0x4d,
0x4b,
0x44,
0x00,
0x00,
0x00,
0xb4,
0x3b,
0x19,
0x60,
0x48,
0x00,
0x00,
0x00,
0x4b,
0x4b,
0x10,
0x33,
0x4c,
0x00,
0x00,
0x00,
0x1a,
0x60,
0x4a,
0x4b,
0x50,
0x00,
0x00,
0x00,
0xb0,
0x3b,
0x19,
0x60,
0x54,
0x00,
0x00,
0x00,
0x48,
0x4b,
0x80,
0x33,
0x58,
0x00,
0x00,
0x00,
0x1a,
0x60,
0x47,
0x4b,
0x5c,
0x00,
0x00,
0x00,
0x40,
0x3b,
0x19,
0x60,
0x60,
0x00,
0x00,
0x00,
0x47,
0x4c,
0x46,
0x4b,
0x64,
0x00,
0x00,
0x00,
0x23,
0x60,
0x24,
0x1d,
0x68,
0x00,
0x00,
0x00,
0x23,
0x60,
0x24,
0x1d,
0x6c,
0x00,
0x00,
0x00,
0x23,
0x60,
0x44,
0x4b,
0x70,
0x00,
0x00,
0x00,
0x40,
0x33,
0x19,
0x60,
0x74,
0x00,
0x00,
0x00,
0x1b,
0x1d,
0x19,
0x60,
0x78,
0x00,
0x00,
0x00,
0x1b,
0x1d,
0x19,
0x60,
0x7c,
0x00,
0x00,
0x00,
0x41,
0x4b,
0xc0,
0xf8,
0x80,
0x00,
0x00,
0x00,
0xe0,
0x31,
0x41,
0x4b,
0x84,
0x00,
0x00,
0x00,
0xc0,
0xf8,
0xf0,
0x31,
0x88,
0x00,
0x00,
0x00,
0x03,
0x04,
0xc0,
0xf8,
0x8c,
0x00,
0x00,
0x00,
0xf0,
0x32,
0x40,
0xf2,
0x90,
0x00,
0x00,
0x00,
0x55,
0x13,
0xc0,
0xf8,
0x94,
0x00,
0x00,
0x00,
0x60,
0x33,
0x3d,
0x4b,
0x98,
0x00,
0x00,
0x00,
0xc0,
0xf8,
0x64,
0x33,
0x9c,
0x00,
0x00,
0x00,
0x13,
0x1d,
0xc0,
0xf8,
0xa0,
0x00,
0x00,
0x00,
0x68,
0x33,
0x3b,
0x4b,
0xa4,
0x00,
0x00,
0x00,
0xc0,
0xf8,
0x6c,
0x33,
0xa8,
0x00,
0x00,
0x00,
0x3a,
0x4b,
0xc0,
0xf8,
0xac,
0x00,
0x00,
0x00,
0x70,
0x33,
0x3a,
0x4b,
0xb0,
0x00,
0x00,
0x00,
0xc0,
0xf8,
0x74,
0x33,
0xb4,
0x00,
0x00,
0x00,
0x39,
0x4b,
0xc0,
0xf8,
0xb8,
0x00,
0x00,
0x00,
0x78,
0x33,
0xc4,
0x23,
0xbc,
0x00,
0x00,
0x00,
0xc0,
0xf8,
0x7c,
0x33,
0xc0,
0x00,
0x00,
0x00,
0x37,
0x4b,
0xc0,
0xf8,
0xc4,
0x00,
0x00,
0x00,
0x80,
0x33,
0x37,
0x4b,
0xc8,
0x00,
0x00,
0x00,
0xc0,
0xf8,
0x84,
0x33,
0xcc,
0x00,
0x00,
0x00,
0x36,
0x4b,
0xc0,
0xf8,
0xd0,
0x00,
0x00,
0x00,
0x88,
0x33,
0x42,
0xf2,
0xd4,
0x00,
0x00,
0x00,
0x44,
0x23,
0xc0,
0xf8,
0xd8,
0x00,
0x00,
0x00,
0x8c,
0x33,
0xc0,
0xf8,
0xdc,
0x00,
0x00,
0x00,
0x90,
0x13,
0x4f,
0xf4,
0xe0,
0x00,
0x00,
0x00,
0x60,
0x43,
0xc0,
0xf8,
0xe4,
0x00,
0x00,
0x00,
0xa0,
0x32,
0xc0,
0xf8,
0xe8,
0x00,
0x00,
0x00,
0xa4,
0x22,
0xc0,
0xf8,
0xec,
0x00,
0x00,
0x00,
0xa8,
0x12,
0x44,
0xf2,
0xf0,
0x00,
0x00,
0x00,
0x40,
0x02,
0x2e,
0x4b,
0xf4,
0x00,
0x00,
0x00,
0x1a,
0x60,
0x1b,
0x1d,
0xf8,
0x00,
0x00,
0x00,
0x2d,
0x4a,
0x1a,
0x60,
0xfc,
0x00,
0x00,
0x00,
0x1b,
0x1d,
0x2d,
0x4a,
0x00,
0x01,
0x00,
0x00,
0x1a,
0x60,
0x1b,
0x1d,
0x04,
0x01,
0x00,
0x00,
0x2c,
0x4a,
0x1a,
0x60,
0x08,
0x01,
0x00,
0x00,
0x1b,
0x1d,
0x2c,
0x4a,
0x0c,
0x01,
0x00,
0x00,
0x1a,
0x60,
0x1b,
0x1d,
0x10,
0x01,
0x00,
0x00,
0x4f,
0xf4,
0x60,
0x12,
0x14,
0x01,
0x00,
0x00,
0x1a,
0x60,
0x25,
0x4a,
0x18,
0x01,
0x00,
0x00,
0x28,
0x32,
0x11,
0x60,
0x1c,
0x01,
0x00,
0x00,
0x23,
0x4a,
0x30,
0x32,
0x20,
0x01,
0x00,
0x00,
0x11,
0x60,
0x12,
0x1d,
0x24,
0x01,
0x00,
0x00,
0x11,
0x60,
0x03,
0x22,
0x28,
0x01,
0x00,
0x00,
0x20,
0x4b,
0x38,
0x33,
0x2c,
0x01,
0x00,
0x00,
0x1a,
0x60,
0x20,
0x22,
0x30,
0x01,
0x00,
0x00,
0x1b,
0x1d,
0x1a,
0x60,
0x34,
0x01,
0x00,
0x00,
0x1b,
0x1d,
0x4f,
0xf0,
0x38,
0x01,
0x00,
0x00,
0x04,
0x22,
0x1a,
0x60,
0x3c,
0x01,
0x00,
0x00,
0x03,
0x06,
0x1b,
0x4a,
0x40,
0x01,
0x00,
0x00,
0x20,
0x32,
0x13,
0x60,
0x44,
0x01,
0x00,
0x00,
0x43,
0x06,
0x13,
0x60,
0x48,
0x01,
0x00,
0x00,
0x83,
0x06,
0x13,
0x60,
0x4c,
0x01,
0x00,
0x00,
0x0c,
0x4b,
0x1c,
0x4a,
0x50,
0x01,
0x00,
0x00,
0x70,
0x33,
0x1a,
0x60,
0x54,
0x01,
0x00,
0x00,
0x41,
0x62,
0x4f,
0xf4,
0x58,
0x01,
0x00,
0x00,
0x7f,
0x22,
0x82,
0x62,
0x5c,
0x01,
0x00,
0x00,
0x19,
0x4a,
0x82,
0x66,
0x60,
0x01,
0x00,
0x00,
0xc1,
0x66,
0x40,
0xf2,
0x64,
0x01,
0x00,
0x00,
0x63,
0x42,
0x42,
0x63,
0x68,
0x01,
0x00,
0x00,
0x01,
0x64,
0x17,
0x49,
0x6c,
0x01,
0x00,
0x00,
0x01,
0x60,
0x10,
0xbd,
0x70,
0x01,
0x00,
0x00,
0x22,
0x76,
0x30,
0x00,
0x74,
0x01,
0x00,
0x00,
0x20,
0x00,
0x00,
0xf0,
0x78,
0x01,
0x00,
0x00,
0x40,
0x06,
0x00,
0xf0,
0x7c,
0x01,
0x00,
0x00,
0x04,
0x00,
0x15,
0x15,
0x80,
0x01,
0x00,
0x00,
0x00,
0x05,
0x00,
0xf0,
0x84,
0x01,
0x00,
0x00,
0x01,
0x00,
0x0d,
0x00,
0x88,
0x01,
0x00,
0x00,
0x32,
0x05,
0x00,
0x04,
0x8c,
0x01,
0x00,
0x00,
0xa9,
0x02,
0xb8,
0x00,
0x90,
0x01,
0x00,
0x00,
0x00,
0x01,
0x40,
0x00,
0x94,
0x01,
0x00,
0x00,
0xeb,
0x06,
0x77,
0x00,
0x98,
0x01,
0x00,
0x00,
0x00,
0x52,
0x7b,
0x50,
0x9c,
0x01,
0x00,
0x00,
0x0b,
0x06,
0x04,
0x10,
0xa0,
0x01,
0x00,
0x00,
0x10,
0x07,
0x17,
0x13,
0xa4,
0x01,
0x00,
0x00,
0x07,
0x74,
0x70,
0x00,
0xa8,
0x01,
0x00,
0x00,
0x40,
0x00,
0x70,
0x50,
0xac,
0x01,
0x00,
0x00,
0x00,
0x04,
0x00,
0xf0,
0xb0,
0x01,
0x00,
0x00,
0x79,
0x07,
0x70,
0x17,
0xb4,
0x01,
0x00,
0x00,
0x70,
0x07,
0xf0,
0x0f,
0xb8,
0x01,
0x00,
0x00,
0x77,
0xfc,
0x03,
0x3f,
0xbc,
0x01,
0x00,
0x00,
0x00,
0x31,
0x10,
0x00,
0xc0,
0x01,
0x00,
0x00,
0x01,
0x00,
0x00,
0xc0,
0xc4,
0x01,
0x00,
0x00,
0x66,
0x66,
0x66,
0x00,
0xc8,
0x01,
0x00,
0x00,
0x01,
0x00,
0x00,
0x11,
0x37,
0x3e,
0xfc,
0xdc,
};
