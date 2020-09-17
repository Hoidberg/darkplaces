/*
	Copyright (C) 2014 nyov <nyov@nexnode.net>

	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU General Public License
	as published by the Free Software Foundation; either version 2
	of the License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

	See the GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef SND_XMP_H
#define SND_XMP_H


qbool XMP_OpenLibrary (void);
void XMP_CloseLibrary (void);
qbool XMP_LoadModFile (const char *filename, sfx_t *sfx);


#endif
