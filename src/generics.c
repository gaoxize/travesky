/*
 * generics.c
 *
 *  Created on: 2023年7月11日
 *      Author: onl_
 */
// 范型
#include "generics.h"

void *maxresult(void *data[],int num, cmp_t cmp){
	int i;
	void *tmp = data[0];
	for(i=1;i<num;i++){
		if(cmp(tmp,data[i])<0){
			tmp = data[i];
		}
	}
	return tmp;
}
