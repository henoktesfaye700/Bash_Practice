#include <stdio.h>

int main (){
	int i, j;

	for (i=0; i<=4; i++)
	{
		printf("this is the STARTING OF OUTER LOOP %d\n", i);
			for (j=0; j<=4; j++)
			{
				printf("Inner loop with number %d\n", j);
			}
		printf("           this is the ENDING of the outer loop %d\n", i);
	}








return 0;
}
