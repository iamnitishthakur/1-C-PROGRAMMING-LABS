// if else if condition

#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your marks :");
	scanf("%d",marks);
	if(marks==100)
	{
		printf("Topper ");
		
	 } 
	 else if(marks>=80 && marks<100)
	 
	 {
	 	printf("First Division");
	 	
	 }
	 else if(marks>=60&&marks<80)
	 
	 {
	 	printf("Second division");
	 	
	 }
	 else if(marks>=50&& marks<60)
	 {
	 	printf("Third division");
	 }
	 else 
	 
	 {
	 	printf("Fail");
	 }
	 return 0;
}
