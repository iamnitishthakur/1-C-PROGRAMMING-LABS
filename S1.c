		// if length of the three sides of a trangle are enter to the keyboard right , program to check where the trangle is valid or not 
		
		#include<stdio.h>
	
		int main()
		{
			float  s1,s2,s3, large, sum;
	printf("Enter frist side value:");
	scanf("%f",&s1);
	
	printf("Enter your second side value:");
	scanf("%f",&s2);
	
	printf("Enter your third side value:");
	
	scanf("%f",&s3);
	
	if(s1>s2)
	{
		sum=(s2+s3);
		
		large=s1;
		
	}
	
	if(s2>s3)
	{
		sum=s3+s1;
		large=s2;
		
		}
		
		
		else
		{
			sum=s1+s2;
			large=s3;
			
			
		}
	
	if(large<sum)
	{
		printf("Valide trangle");
		
		
	}
	else
	{
		printf("Not valide");
		
		
	}
return 0;
}
