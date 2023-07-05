/*
 * main.c
 *	堆栈 出栈查询
 *  Created on: 2023年7月4日
 *      Author: onl_
 */;

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "assert.h"
#include "redirect_ptr.h"
int a, b = 1;
/*内联函数*/
static inline int MAX(int a, int b)
{
	return a>b ? a:b;
}

int c[] = {9,3,5,2,1,0,8,7,6,4};
int max(int n){
	return n == 0 ? c[0]:MAX(c[0],max(n-1));
}
void _Assert(char *mesg){
	fputs(mesg, stderr);
	fputs(" -- assertion failed\n",stderr);
	abort();
}
//指针变量交换
int *swap(int *px, int *py)
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
	return px;
}

void say_hello(const char *str)
{
	printf("Hello %s\n",str);
}
int main(void)
{
	printf("%s\n",__func__);
	int result = max(9);
	printf("result is %d\n",result);

	push('a');
	push('b');
	push('c');
    void (*f) (const char *) = say_hello;
    f("Guys");
	while(!is_empty())
		putchar(pop());
	putchar('\n');

	assert(2<3);

	int i = 20, j = 30;
	int *p = swap(&i, &j);
	printf("now i=%d j=%d *P=%d\n",i,j,*p);

	const char *firstday = NULL;
	const char *secondday = NULL;
	get_a_day(&firstday);
	get_a_day(&secondday);
	printf("%s\t%s\n",firstday,secondday);
	return 0;
}


