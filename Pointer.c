 //Pointer 
 
 #include<stdio.h>
 
 int main(){
 	int a=10,*p,**q;
 	
 	p=&a;
 	q=&p;
 	
 	printf("%d\n",a);//10
 	printf("%d\n",&a);//address a 
 	printf("%d\n",p);//address a 
 	printf("%d\n",*p);//10
 	printf("%d\n",*q);//addess p
 	printf("%d",**q);//10
 }
