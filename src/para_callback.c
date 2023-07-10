/*
 * para_callback.c
 *
 *  Created on: 2023年7月6日
 *      Author: onl_
 */

#include "para_callback.h"

void repeat_three_times(callback_t f, void *para){
	f(para);
	f(para);
	f(para);
}
