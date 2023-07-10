/*
 * para_callback.h
 *
 *  Created on: 2023年7月6日
 *      Author: onl_
 *      回调函数
 */

#ifndef PARA_CALLBACK_H_
#define PARA_CALLBACK_H_

typedef void (*callback_t)(void *);
extern void repeat_three_times(callback_t, void *);

#endif /* PARA_CALLBACK_H_ */
