#include "shell.h"
#include <stdio.h>
int main() 
{
	void * p = create();
	printf("Value of object's member is %d\n", value(p));

	set(p, 1234);

	printf("Value of object's member is %d\n", value(p));

	destory(p);
	
	return 0;
}
