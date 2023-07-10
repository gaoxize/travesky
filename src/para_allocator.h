/*
 * para_allocator.h
 *
 *  Created on: 2023年7月6日
 *      Author: onl_
 */

#ifndef SRC_PARA_ALLOCATOR_H_
#define SRC_PARA_ALLOCATOR_H_
typedef struct {
	int number;
	char *msg;
} unit_t;

extern void alloc_unit(unit_t **);
extern void free_unit(unit_t *);
#endif /* SRC_PARA_ALLOCATOR_H_ */
