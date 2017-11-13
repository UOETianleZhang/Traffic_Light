/*File Name: gpio_init.h
Project Name: Traffic_Light
Target Device/Platform: Basys3 Board (with Microblaze processor on the Artix-7 FPGA)
Tool Version: Xilinx SDK 2015.2
Name: Tianle Zhang
Company: University of Edinburgh
Creation Date and Time: 11/11/2016; 14:07
Description:
This header file contains all declarations of functions in gpio_init.c.
*/
#ifndef __GPIO_INIT_H_
#define __GPIO_INIT_H_

#include "xgpio.h"		// Added for xgpio object definitions

XStatus initGpio(void);

XGpio SEG7_HEX_OUT;
XGpio SEG7_SEL_OUT;

XGpio VGA_REGION_0;
XGpio VGA_REGION_1;
XGpio VGA_REGION_2;
XGpio VGA_REGION_3;
XGpio VGA_REGION_4;
XGpio VGA_REGION_5;
XGpio VGA_REGION_6;
XGpio VGA_REGION_7;
XGpio VGA_REGION_8;
XGpio VGA_REGION_9;
XGpio VGA_REGION_10;
XGpio VGA_REGION_11;

XGpio VGA_HS;
XGpio VGA_VS;

XGpio P_BTN_LEFT;
XGpio P_BTN_UP;
XGpio P_BTN_DOWN;
XGpio P_BTN_RIGHT;
XGpio LED_OUT;
XGpio SLIDE_SWITCHES;

#endif
