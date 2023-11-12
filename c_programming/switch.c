#include <stdio.h>

int main (void)
{
	char grade;
	printf("please enter your grade to see the remark\n");
	scanf("%c", &grade);

	switch(grade);
	{
		case 'A':
			printf("you are an Excellent student\n");
			break;
		case 'B':
			printf("good student");
			break;
		case 'C' :
			printf("you did well");
			break;
		default :
			printf ("No comment");
	}



	return 0;
}
