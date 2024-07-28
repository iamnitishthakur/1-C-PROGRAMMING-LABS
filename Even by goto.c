#include<stdio.h>
int main()
{
	int i=2;
	EVEN:
		
		sleep(1);
		printf("%d\n",i);
		i=i+2;
		if(i<=100)
		goto EVEN;
		return 0;
}
