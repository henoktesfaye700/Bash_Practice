#include <stdio.h>

/**
  *main : Void
  *Return : Returns 0
  */

int main(void)
{
	int age;
	printf("what is your age\n");
	scanf("%d", &age);

	if (age > 18)
	{
		printf ("you are young\n");
	}

	else if (age >= 18 && age < 18)
	{

		printf("you are child\n");
	}
	else 
	{
		printf ("Sorry, I don't know any thing\n");
	}	
		
	return 0;
}
