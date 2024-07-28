 C 

	
	//mathematical calculator
	
	#include<stdio.h>
	int main()
	{
	int a,b,c,ch, p,t,num,yr, sum,AR,CR, circumfrance,area,pi=3.14,da,hra,gross,bs;
	float si,r,km,m,cm,ft,inch, f,cl;
	
	int cho;
		

	printf("1. Addtion two numbers then click 1\n");
	printf("2. Subtraction two numbers then click 2\n");
	printf("3. Multiplication two numbers then click 3\n");
	printf("4. Division two numbers then click 4\n");
	printf("5. Simple Intrest  click 5\n");
	printf("6. Find even or odd number click 6\n");
	printf("7. Dsitance convertor in cm & km, ft click 7\n");
	printf("8. Temprature convert in celcius click 8\n");
	printf("9. Area and circumfrance of retrangle click 9\n");
	printf("10. Area and circumfrance of circule click 10\n");
	printf("11. Find gross salary click 11\n");
	printf("12. Find Your swap click 12\n");
	printf("____________________________________________________  |\n");
	
	do{
	
	printf("\n Enter your choice click 'Hints- given cases top side : ");
	printf("\n_________________________________________________________ ");
	scanf("%d",&ch);

		switch(ch){
		
		case 1: printf("\n Enter frist numbers: ");
				scanf("%d",&a);
				printf(" Enter second numbers : ");
				scanf("%d",&b);	
				sum=a+b;
				printf("\nYour final Anwer is : %d",sum);
			break;

		case 2:	printf("\n Enter frist numbers: ");
				scanf("%d",&a);
				printf(" Enter second numbers : ");
				scanf("%d",&b);	
				sum=a-b;
				printf("\nYour final Anwer is : %d",sum);
			break;
			
		case 3:	printf("\n Enter frist numbers: ");
				scanf("%d",&a);
				printf(" Enter second numbers : ");
				scanf("%d",&b);	
				sum=a*b;
				printf("\nYour final Anwer is : %d",sum);
			break;
		
		
	
		case 4: printf("\n Enter frist numbers: ");
				scanf("%d",&a);
				printf(" Enter second numbers : ");
				scanf("%d",&b);	
				sum=a/b;
				printf("\nYour final Anwer is : %d",sum);		
			break;
			
		case 5: printf("|| I am ready find your simple Intrest ||\n");
 	 			printf("\nEnter Your principle amount: ");
 	 			scanf("%d",&p);
     			printf("\nEnter Your time: ");
      			scanf("%d",&t);
     			printf("\nEnter Your rate: ");
      			scanf("%f",&r);
      			sum=p*r*t/100;
    			printf("\nYour final Answer  :=%d",sum );
			break;
			
		case 6: printf("Enter your number: ");
				scanf("%d",&num);
				if(num %2==0)
				{
					printf("this is a even number");
				}
				else{
					printf("this is odd number");	
		  		}
			break;
			
		case 7: printf("\nEnter your distance in km ");
				scanf("%f",&km);
				m=km*1000;
				cm=m*100;
				ft=cm/30.0;
				printf("Distance in meter=%f\n",m);
				printf("Distance in cm=%f\n",cm);
				printf("Distance in ft=%f\n",ft);
			break;
			case 8:
				printf("Enter your temprature in fahrenheit : ");
				scanf("%f",&f);
			cl=5*(f-32)/9;
			printf("\nYour temprature in celcius=%f\n",cl );

  			case 9:
  					printf("Find Area and Circumfrance !\n");
				printf("Enter your length : ");
				scanf("%f",&a);
				printf("Enter your breadth : ");
				scanf("%f",&b);
				area=a*b;
				printf("Your area =%f\n",area);
				
				circumfrance=2*(a+b);
				printf("Your circumfrance =%f\n",circumfrance);
				break;
				
			case 10:
					printf("\nEnter your radius : ");
				scanf("%f",&r);
			AR=pi*r*r;
			
			CR=2*pi*r;
			
				printf("Your area =%f\n",AR);
				
					printf("Your area =%f\n",CR);
					
				break;
				
		case 11:
			printf("Enter you salary : ");
	
	scanf("%f",&bs);
	da=0.03*bs;
	hra=0.08*bs;
	gross=bs+da+hra;
	printf("Your grass salary=%f",gross);
	break;
	case 12:
		printf("Enter your value:\n");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Your swap value a : %d\n Your swap value b: %d",a,b);
	return 0;
			
			
		default: printf("Invalid Operation!");
	}
	
		printf("\n Do you continue, please press 1 otherwise press any key: ");
		printf("\n____________________________________________________________");
	scanf("%d",&cho);
	
}while(cho==1);
printf("sorry ! This vale have not my databse !");

		
	return 0;
}
	
	
	

