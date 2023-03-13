#include<stdio.h>
#include<conio.h>
long factorial (int n)
{
	if(n==1||n==0)
	{
		return 1;
	}
	else
	{
		return(n*factorial(n-1));
	}
}
main()
{
	int x;
	long fact;
	clrscr();
	printf("Enter a no: ");
	scanf("%d",&x);
	fact=factorial(x);
	printf("Factorial = %d",fact);
	getch();
	return 0;
}