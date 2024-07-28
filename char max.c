#include<stdio.h>
int main()
{
	char i,chr;
	printf("Enter your charecter: ");
	scanf("%c",&chr);
	sleep(2);
	for(i=1;i<=10;i++)
	{
		printf("%c\2",chr);
	}
}
