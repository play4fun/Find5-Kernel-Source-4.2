/*
 * Driver include for the PN544 NFC chip.
 *
 * Copyright (C) Nokia Corporation
 *
 * Author: Jari Vanhala <ext-jari.vanhala@nokia.com>
 * Contact: Matti Aaltoenn <matti.j.aaltonen@nokia.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

//ALERT:please relocate pn544.h under .\kernel\include\linux

#define PN544_MAGIC	0xE9

/*
 * PN544 power control via ioctl
 * PN544_SET_PWR(0): power off
 * PN544_SET_PWR(1): power on
 * PN544_SET_PWR(2): reset and power on with firmware download enabled
 */
#define PN544_SET_PWR	_IOW(PN544_MAGIC, 0x01, unsigned int)

struct pn544_i2c_platform_data 
{
	unsigned int irq_gpio;
	unsigned int ven_gpio;
	unsigned int firm_gpio;	//firmware download mode GPIO4
};

