//convert temprature into fahreinheit to celcius.c
#include <stdio.h>
int main()
{
	int f;
	printf("Enter the temp f\n");
	scanf("%d",&f);
	printf("temp in cels is %d",((5*(f-32))/9));

	return 0;
}