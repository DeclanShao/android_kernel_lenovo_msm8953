/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2021, Lenovo.
 *
 * External PA / output-switch GPIO control for TB8703.
 *
 * The implementations live in asoc/msm8952.c, because they dereference
 * struct msm_asoc_mach_data and therefore need the layout from
 * asoc/msm8952.h.  That header cannot be pulled into the codec driver:
 * asoc/sdm660-common.h declares a different struct with the same tag and
 * the two definitions collide.
 *
 * Only the prototypes are exposed here, so that the codec driver calls
 * into the machine driver through the exported symbols.  Callers must
 * pass the drvdata pointer they already got from snd_soc_card_get_drvdata()
 * and must not dereference it.
 */
#ifndef __MSM8952_EXT_PA_H
#define __MSM8952_EXT_PA_H

#include <linux/types.h>

struct msm_asoc_mach_data;

/* external speaker PA enable */
int msm_spk_ext_pa_ctrl(struct msm_asoc_mach_data *pdata, bool on);

/* speaker / headphone output switch */
int msm_hs_ext_pa_ctrl(struct msm_asoc_mach_data *pdata, bool on);

/* external receiver PA */
int msm_rec_ext_pa_ctrl(struct msm_asoc_mach_data *pdata, bool on);
void msm_rec_ext_pa_schedule(struct msm_asoc_mach_data *pdata);
void msm_rec_ext_pa_disable(struct msm_asoc_mach_data *pdata);

#endif /* __MSM8952_EXT_PA_H */
