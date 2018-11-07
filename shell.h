#ifndef __SHELL_H__
#define __SHELL_H__
//#include "implement.h"

#ifdef __cplusplus
extern "C" 	
{
#endif

	void *create();
	void destory(void *);
	void set(void *ptr, int val);
	int value(void *ptr);

#ifdef __cplusplus
}
#endif

#endif
