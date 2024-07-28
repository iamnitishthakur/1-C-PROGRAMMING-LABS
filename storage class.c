//storage class

#include<stdio.h>
void fun()
{
auto int a=10;
if(1==1)
{
	auto int b=20;
	printf("%d\n",a);
	printf("%d\n",b);
}

printf("%d",a);
return 0;
}
