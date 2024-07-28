			// The leangth and breadth of a retangle and raduius of a circule are input thought the keyboard . Write a program to calculte the area the parameter of the retrangle, and circumfrance of the circle.
			
			#include<stdio.h>
			int main()
			{
				float area,circumfrance,CR,a,b,r,AR,ch,da,hra,gross;
				float pi=3.14;
					
				
				
					printf("Find Area and Circumfrance !\n");
				printf("Enter your length : ");
				scanf("%f",&a);
				printf("Enter your breadth : ");
				scanf("%f",&b);
				area=a*b;
				printf("Your area =%f\n",area);
				
				circumfrance=2*(a+b);
				printf("Your circumfrance =%f\n",circumfrance);
				
			
					printf("\nEnter your radius : ");
				scanf("%f",&r);
			AR=pi*r*r;
			
			CR=2*pi*r;
			
				printf("Your area =%f\n",AR);
				
					printf("Your area =%f\n",CR);
					
			
				
					
				
				return 0;
				}
