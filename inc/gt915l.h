/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2019-06-01     tyustli     the first version
 */

#ifndef __GT915L_H_
#define __GT915L_H_
#include <rtthread.h>
#include "touch.h"

#define GTP_ADDR_LENGTH        (2)
#define GT915L_MAX_TOUCH       (5)
#define GT915L_POINT_INFO_NUM  (5)

#define GT915L_ADDRESS_HIGH    (0x5D)
#define GT915L_ADDRESS_LOW     (0x14)

#define GT915L_COMMAND         (0x8040)
#define GT915L_CONFIG          (0x8047)

#define GT9XX_PRODUCT_ID       (0x8140)
#define GT915L_READ_STATUS     (0x814E)

#define GT915L_POINT1_REG      (0x814F)
#define GT915L_POINT2_REG      (0X8157)
#define GT915L_POINT3_REG      (0X815F)
#define GT915L_POINT4_REG      (0X8167)
#define GT915L_POINT5_REG      (0X816F)

#define GT915L_CHECK_SUM       (0X80FF)

int rt_hw_gt915l_init(const char *name, struct rt_touch_config *cfg);

#endif
