#include<stdio.h>
int main()
{
	auto int a=10; //local
	if(1==1)
	{
		auto int b=20;// local 
		printf("%d\n",a);
		printf("%d\n",b);
		
		
	}
	printf("%d\n",a);
	return 0;
}
