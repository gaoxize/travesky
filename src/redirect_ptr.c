/*
 * redirect_ptr.c
 *
 *  Created on: 2023年7月5日
 *      Author: onl_
 */
#include "redirect_ptr.h"

static const char *msg[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

void get_a_day(const char **pp)
{
	static int i = 0;
	*pp = msg[i%7];
	i++;
}

