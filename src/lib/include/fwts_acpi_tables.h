/*
 * Copyright (C) 2010 Canonical
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#ifndef __FWTS_ACPI_TABLES_H__
#define __FWTS_ACPI_TABLES_H__

typedef struct {
	char    name[5];
	void    *data;
	int     length;
	uint64  addr;
} fwts_acpi_table_info;

void fwts_acpi_load_tables(void);
void fwts_acpi_free_tables(void);

fwts_acpi_table_info *fwts_acpi_find_table(const char *name, const int which);
fwts_acpi_table_info *fwts_acpi_find_table_by_addr(const uint64 addr);
fwts_acpi_table_info *fwts_acpi_get_table(const int index);

#endif
