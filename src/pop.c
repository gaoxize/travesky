/*
 * pop.c
 *  出栈函数设置
 *  Created on: 2023年7月4日
 *      Author: onl_
 */



extern char stack[512];
extern int top;

char pop(void)
{
	return stack[top--];
}

