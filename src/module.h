/*-
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * module.h - Miscellaneous module definitions
 * Copyright (c) 1996 Richard Henderson <rth@tamu.edu>
 * Copyright (c) 2004-7 Martin Schulze <joey@infodrom.org>
 *
 * This file is part of the sysklogd package.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this file; see the file COPYING.  If not, write to the
 * Free Software Foundation, 51 Franklin Street - Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

#ifndef SYSKLOGD_MODULE_H_
#define SYSKLOGD_MODULE_H_

struct sym_table {
	unsigned long  value;
	char          *name;
};

struct Module {
	struct sym_table *sym_array;
	int               num_syms;

	char              *name;
};

#endif /* SYSKLOGD_MODULE_H_ */
