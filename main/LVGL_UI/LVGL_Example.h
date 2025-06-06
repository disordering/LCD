#pragma once

#include "lvgl.h"
#include "demos/lv_demos.h"

#include "LVGL_Driver.h"
#include "PCF85063.h"
#include "QMI8658.h"
#include "SD_MMC.h"
#include "BAT_Driver.h"
#include "Wireless.h"

#define EXAMPLE1_LVGL_TICK_PERIOD_MS  1000
extern uint8_t UI_Page;
extern lv_obj_t * t1;
extern lv_obj_t * t2;

void Page_switching(void);       


void Backlight_adjustment_event_cb(lv_event_t * e);

void Lvgl_Example1(void);
void LVGL_Backlight_adjustment(uint8_t Backlight);