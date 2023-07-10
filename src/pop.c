/*
 * pop.c
 *  出栈函数设置
 *  Created on: 2023年7月4日
 *      Author: onl_
 */

#include "main.h"

extern char stack[512];
static item_t stacks[512];
extern int top;

char pop(void)
{
	return stack[top--];
}
item_t pops(void){
	return stacks[--top];
}


