#include<stdio.h>
#include<string.h>
int main()
{
	char str[50], str2[40];
	puts("Enter Your Number: ");
	gets(str);
	
	puts("Enter Your Number: ");
	gets(str);
	strcat(str,str2);
	puts(str);
	return 0;
	
}
