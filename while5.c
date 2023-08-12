#include<stdio.h>
main()
{
	int i=1,N;
	printf("enter value N :");
	scanf("%d",&N);
	while(i<=N)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
		i++;
	}
	
}
