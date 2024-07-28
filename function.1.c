//function

#include<stdio.h>
int sum()
{
	int a,b;
	printf("Enter your two numbers: \n");
	scanf("%d%d",&a,&b);
	return a+b;
	
}

int main()
{

int store=sum();
printf("%d",store);
return 0;
}
