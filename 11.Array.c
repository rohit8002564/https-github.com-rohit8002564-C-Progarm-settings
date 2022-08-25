/* input 10 integer num in an Array and print only those which are prime */
#include<stdio.h>
int main()
{
	int n[10],i,j,s=0;
	for(i=0; i<10; i++)
	{
		printf("\n Enter any number:-");
		scanf("%d",&n[i]);

	}
	for(i=0; i<10; i++)
	{
		for(j=1; j<=n[i]; j++)
		{
			if(n[i]%j==0)
				s=s+1;
		}
		if(s==2)
			printf("%d\t ",n[i]);
		s=0;
	}
	return 0;
}