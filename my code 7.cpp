#include <stdio.h>
int main(int argc, char** argv)
{
	int a;
	printf("Enter the number: ");
	scanf("%d",&a);
	if((a>=0)&&(a>100001))
	{
		printf("number is between 100001 and 1000000");
	}
	else if(a>10001)
	{
	printf("Number is between 10001 and 100000");	
	}
	else if(a>1001)
	{
	printf("Number is between 1001 and 10000");	
	}
	else if(a>101)
	{
	printf("Number is between 101 and 1000");	
	}
	else if(a>1)
	{
	printf("Number is less 100");	
	}
	else
	{
		printf("Enter a positive number");
	}
	return 0;
}