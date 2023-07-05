/*
 * assert.h
 *
 *  Created on: 2023年7月5日
 *      Author: onl_
 */
#undef assert
#ifndef NDEBUG
	#define assert(test)	((void)0)
#else
	void _Assert(char *);
	#define _STR(x)	_VAL(x)
	#define _VAL(x)	#x
	#define assert(test)	((test)?(void)0):_Assert(__FILE__ ":" _STR(__LINE__) " " #test))
#endif
