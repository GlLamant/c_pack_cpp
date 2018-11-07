#include "shell.h"
#include "implement.h"

void *create()
{
	return new CImplement;
}

void destory(void *ptr)
{
	delete static_cast<CImplement *>(ptr);
}

void set(void *ptr, int val)
{
#if 0
	CImplement *tmp = (CImplement *) ptr;
	tmp->Set(val);
#else 
	static_cast<CImplement *> (ptr) -> Set(val);
#endif
}

int value(void *ptr)
{
#if 0
	CImplement *tmp = (CImplement *) ptr;
	return tmp->Value();
#else 
	return static_cast<CImplement *> (ptr) -> Value();
#endif
}
