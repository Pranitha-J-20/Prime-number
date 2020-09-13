#include<stdio.h>
int checkforprime(int);
int i;
main()
{
	int n1, prime;
	printf("Enter a number: ");
	scanf("%d",&n1);
	i=n1/2;
	prime=checkforprime(n1);
	if(prime==1)
	printf("%d is a prime number",n1);
	else
	printf("%d is not a prime number",n1);
}
int checkforprime(int n1)
{
	if(i==1)
	{
	return 1;
	}
	else if(n1%i==0)
	{
		return 0;
	}
	else
	{
		i=i-1;
		checkforprime(n1);
	}
		
}
