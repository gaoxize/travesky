/*
 * populator.h
 *
 *  Created on: 2023年7月10日
 *      Author: onl_
 */

#ifndef POPULATOR_H_
#define POPULATOR_H_

typedef struct {
	int number;
	char msg[20];
} unit_ts;

extern void set_unit(unit_ts *);


#endif /* POPULATOR_H_ */
