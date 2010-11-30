/* -*- c-basic-offset: 8 -*-
   rdesktop: A Remote Desktop Protocol client.
   XP Unlimited protocol - Load balancing client extension

   Copyright (C) 2010 O.S. Systems Software LTDA.
   Copyright (C) 2010 Eduardo Beloni <beloni@ossystems.com.br>

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/


#ifndef __XPU_H
#define __XPU_H

#define XPU_ERROR(fmt, ...)  fprintf(stderr, "XPU Error %s (%d): " fmt, __FUNCTION__, __LINE__, ## __VA_ARGS__)
#define XPU_DEBUG(fmt, ...)  printf("XPU %s (%d): " fmt, __FUNCTION__, __LINE__, ## __VA_ARGS__)

void
xpu_prefered_server(char *rdp_server, int *rdp_port, const char *user, int xpu_port);

#endif
