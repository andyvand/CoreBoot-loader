/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2014 Google Inc.
 * Copyright (C) 2015-2016 Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _SOC_ROMSTAGE_H_
#define _SOC_ROMSTAGE_H_

#include <arch/cpu.h>
#include <fsp/api.h>

asmlinkage void *car_stage_c_entry(void);
void mainboard_memory_init_params(struct FSPM_UPD *mupd);

void systemagent_early_init(void);
int smbus_read_byte(unsigned device, unsigned address);
int early_spi_read_wpsr(u8 *sr);

#endif /* _SOC_ROMSTAGE_H_ */
