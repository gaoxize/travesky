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
#include "maze.h"
#include "main.h"
#include "redirect_ptr.h"
#include "para_allocator.h"
#include "para_callback.h"
#include "populator.h"
#include "generics.h"

 typedef struct {
	 const char *name;
	 int score;
 } student_t;

int cmp_student(void *a, void *b){
	if(((student_t *)a)->score > (((student_t *)b)->score)){
		return 1;
	}else if(((student_t *)a)->score == (((student_t *)b)->score)){
		return 0;
	}else{
		return -1;
	}
}
 int a, b = 1;

 struct point predecessor[MAX_ROW][MAX_COL] = {
		 {{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1}},
		 {{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1}},
		 {{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1}},
		 {{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1}},
		 {{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1}},
 };

 void visit(int row, int col, struct point pre)
 {
	 struct point visit_point = {row, col };
	 maze[row][col] = 2;
	 predecessor[row][col] = pre;
	 pushs(visit_point);

 }


/*内联函数*/
static inline int MAX(int a, int b)
{
	return a>b ? a:b;
}
typedef struct {
	unsigned int one:1;
	unsigned int two:3;
	unsigned int three:10;
	unsigned int four:5;
	unsigned int :2;
	unsigned int five:8;
	unsigned int six:8;
} demo_type;



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

void say_hello(void *str){
	printf("Hello %s\n",(const char *)str);
}

void count_numbers(void *num){
	int i;
	for(i=1;i<=(int)num;i++)
		printf("%d ",i);
	putchar('\n');
}
const int A = 10;
int aa = 20;

int main(void)
{


	static int aa = 40;
	char bs[] = "Hello World";
	register int c = 50;
	printf("Hello World %d\n",c);


	struct point po = {0,0};
	maze[po.row][po.col] = 2;
	pushs(po);

	while(!is_emptys()){
		po = pops();
		if(po.row == MAX_ROW -1 && po.col == MAX_COL -1)
			break;
		print_maze();
	}
	if(po.row == MAX_ROW -1 && po.col == MAX_COL -1){
		printf("(%d, %d)\n",po.row,po.col);
		while(predecessor[po.row][po.col].row != -1){
			po = predecessor[po.row][po.col];
			printf("(%d, %d)\n",po.row,po.col);
		}
	}else{
		printf("No path!\n");
	}

	printf("%s\n",__func__);

	unit_ts ts;
	set_unit(&ts);
	printf("number; %d\nmsg: %s\n",ts.number,ts.msg);

	demo_type s = {1,5,513,17,129,0x81};
	printf("sizeof demo_type = %u\n",sizeof(demo_type));
	printf("values: s=%u,%u,%u,%u,%u,%u\n",s.one,s.two,s.three,s.four,s.five,s.six);

	int result = max(9);
	printf("result is %d\n",result);

	push('a');
	push('b');
	push('c');

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

	repeat_three_times(say_hello, (void *) "Guys");
	repeat_three_times(count_numbers, (void *)4);

	student_t list[4] = {{"tom",68},{"jerry",72},{"moby",60},{"kirby",89}};
	student_t *plist = {&list[0],&list[1],&list[2],&list[3]};
	student_t *pmax = maxresult((void **)plist,4, cmp_student);
	printf("%s gets the highest score %d\n",pmax->name,pmax->score);


	unit_t *t1 = NULL;
	alloc_unit(&t1);
	printf("number: %d\n Ms: %s\n",t1->number,t1->msg);
	free_unit(t1);
	t1 = NULL;
	return 0;
}


