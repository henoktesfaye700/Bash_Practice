#include <stdio.h>

int main(void)
{
	int x;

	printf("enter the value\n");
	x = getchar();
	
	printf("you entered\n");
	putchar(x);
	printf("\n");

	char name [100];

	printf("enter name\n");
	scanf("%s" , name);

	printf("your name %s", name);

	return (0);
}
