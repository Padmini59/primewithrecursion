#include<stdio.h>
#include<math.h>
int checkprime(int n,int i);
main()
{
	int n,i=2,num=0;
	printf("enter a number to find prime or not");
	scanf("%d",&n);
	num=checkprime(n,i);
	if(num==0||num==1)
	printf("number is not prime=%d",n);
	else
	printf("number is  prime");
	
	
}
int checkprime(n,i)
{
	if(i==n||i==1)
	  return 1;
	else if(n%i==0)
	   return(checkprime(n,i+1));
	else
	    return 0;     
}
