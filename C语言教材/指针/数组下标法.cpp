#include<stdio.h>
int main()
{
	int a[10];
	int i;
	printf("input array:\n"); 
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("show array:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}