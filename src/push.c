/*
 * push.c
 *  进行入栈函数定义
 *  Created on: 2023年7月4日
 *      Author: onl_
 */
#include "main.h"


extern char stack[512];
static item_t stacks[512];
extern int top;
void push(char c)
{
	stack[++top] = c;
}
void pushs(item_t p){
	stacks[top++] = p;
}

