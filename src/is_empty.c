/*
 * is_empty.c
 *
 *  Created on: 2023年7月4日
 *      Author: onl_
 */

extern int top;

int is_empty(void)
{
	return top == -1;
}

int is_emptys(void)
{
	return top == 0;
}
