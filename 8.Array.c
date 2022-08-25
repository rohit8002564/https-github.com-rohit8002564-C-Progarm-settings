#include<stdio.h>
int main()
{
	int char[]={('R','O','H','I','T','K','U')};
	int i,j;

	for(i=0; i<=4; i=i+2)
	{
		j=char[i];
		char[i]=char[i+1];
		char[i+i]=j;
	}
	for(i=0; i<=4; i=i+2)
	{
	printf("%d\t",char[i]);
    }
	return 0;
	
}