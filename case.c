	//WAP to implement the calculaton using switch.
	#include<stdio.h>
	int main()
	{
		int a,b,res=0;
		char ch;
		printf("click 1.Add  of two number:\n");
		printf("click 2.sub  of two number:\n");
		printf("click 3.multi  of two number:\n");
		printf("click 4.div  of two number:\n");
		printf("____________________________\n");
		printf("Choose your case : ");
		scanf("%c",&ch);
	
	printf("Enter Your frist number : ");
	scanf("%d",&a);
	printf("Enter Your second number : ");
	scanf("%d",&b);
	
	switch(ch)
	{
	case 1:
		res=a+b;
		break;
	case 2:
		res=a-b;
		break;
	case 3:
		res=a*b;
		break;
	case 4:
		res=a/b;
		break;
	
	}
	printf("Result= %d",res);
	return 0;
	}
