/*
 * push.c
 *  进行入栈函数定义
 *  Created on: 2023年7月4日
 *      Author: onl_
 */
extern char stack[512];
extern int top;
void push(char c)
{
	stack[++top] = c;
}


