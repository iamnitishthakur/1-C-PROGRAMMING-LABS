 // Simpal Intrest 
 
 #include<stdio.h>
 int main()
 {
 	int p,t;
 	float r,si;
 	printf("|| I am ready find your simple Intrest ||");
 	 
 	printf("\nEnter Your principle: ");
 	 scanf("%d",&p);
     printf("\nEnter Your time: ");
      scanf("%d",&t);
     printf("\nEnter Your rate: ");
      scanf("%f",&r);
     printf("\nYour final Answer is : ");
 
     scanf("%d %d %f",&p,&t,&r);
     
		si=p*r*t/100;
		scanf("%f\n",si);
		printf("Exit");
		return 0;
		
	}
