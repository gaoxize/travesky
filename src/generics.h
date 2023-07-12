/*
 * generics.h
 *
 *  Created on: 2023年7月11日
 *      Author: onl_
 */

#ifndef GENERICS_H_
#define GENERICS_H_

typedef int (*cmp_t) (void *, void *);
extern void *maxresult(void *data[], int num, cmp_t cmp);
#endif /* GENERICS_H_ */
