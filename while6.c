#include<stdio.h>
main()
{
	int i=1,N;
	printf("enter a value N:");
	scanf("%d",&N);
	
	while(N>=i)
	{
		if(N%2==0)
		{
			printf("%d\n",N);
		}
		N--;
	}
}n
