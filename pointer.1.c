// pointer 2

#include<stdio.h>

int main()
{
	int x=100,*a,**b;
	a=&x;
	b=&a;
	
	
	printf("%d\n",x);//100
	printf("%d\n",&x);//address x
	printf("%d\n",a);//address x
	printf("%d\n",*a);//100
	printf("%d\n",*b);//addess 
	printf("%d\n",**b);//100 
	}
