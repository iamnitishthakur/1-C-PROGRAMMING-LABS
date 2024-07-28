//storage class

#include<stdio.h>
void fun()
{

int a=10;


	static int b=20;
	printf("%d\n",a);
	printf("%d\n",b);
	++a;   ++b;
}
int main()
{
	fun();
	fun();
	fun();
	fun();


return 0;
}
