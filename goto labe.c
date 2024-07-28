// print of the natural number by the help of goto label                    mistake

#include<stdio.h>
int main()
{
	int i;
	label:
		printf("%d",i);
		++i;
		if (i<=10);
		goto label;
		return 0;

}
