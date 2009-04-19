/***************************************************************************************
 *  Genesis Plus 1.2a
 *  M68k Bank access from Z80
 *
 *  Copyright (C) 1998, 1999, 2000, 2001, 2002, 2003  Charles Mac Donald (original code)
 *  modified by Eke-Eke (compatibility fixes & additional code), GC/Wii port
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 ****************************************************************************************/
#ifndef _MEMBNK_H_
#define _MEMBNK_H_

extern uint32 zbank_unused_r(uint32 address);
extern void zbank_unused_w(uint32 address, uint32 data);
extern uint32 zbank_lockup_r(uint32 address);
extern void zbank_lockup_w(uint32 address, uint32 data);
extern uint32 zbank_read_ctrl_io(uint32 address);
extern void zbank_write_ctrl_io(uint32 address, uint32 data);
extern uint32 zbank_read_vdp(uint32 address);
extern void zbank_write_vdp(uint32 address, uint32 data);

struct _zbank_memory_map
{
  unsigned int (*read)(unsigned int address);
  void (*write)(unsigned int address, unsigned int data);
} zbank_memory_map[256];

#endif /* _MEMBNK_H_ */