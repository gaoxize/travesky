/*
 * populator.c
 *
 *  Created on: 2023年7月10日
 *      Author: onl_
 */

#include <string.h>
#include "populator.h"

void set_unit(unit_ts *p){
	if (p == NULL){
		return;
	}
	p->number = 3;
	strcpy(p->msg,"Hello World!");
}
