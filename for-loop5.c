#include<stdio.h>

int main()
{
	int i,n;
	float sum;
	printf("Enter a number: ");
	scanf("%d",&n);

	sum=0.0f;

	for(i=1;i<=n;i++)
		sum = sum + ((float)1/(float)i);

	printf("Sum of the series: %f\n",sum);

	return 0;
}
