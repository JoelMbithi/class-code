# include <stdio.h>
int main(int argc, char** argv)
{
	int i,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	if (n==2)
	{
		printf("\n the number is prime%d");
		return 0;
	}
	
	for(i=2;i<n;i++)
	{
			if(n%i==0)
			{
				
		printf("\n the number is not prime");
		return 0;
	}
	}
	printf("number is prime");
	return 0;
}