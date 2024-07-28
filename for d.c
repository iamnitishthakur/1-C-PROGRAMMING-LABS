#include<stdio.h>
int main()
{
    int n,a,b,t;
    	scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        b=b+a*a*a;
        n=n/10;
    }
    if(b==t)
   { printf("Armostrong number: ");
}else
printf("Not Armostrong Number");

}
