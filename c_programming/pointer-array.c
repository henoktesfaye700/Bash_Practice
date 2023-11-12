#include <stdio.h>

int main ()
{
	int age[]={1,2,3,4,5,6};
	for (int i=0; i <5; i++)
	{
		printf ("%d = %p\n", age[i], &age[i]);
	}

	return 0;
}
