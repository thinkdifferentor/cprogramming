#include<stdio.h>
int main()
{
	int *p1,*p2,*p,a,b;
	printf("Please input a,b:");
	scanf("%d %d",&a,&b);
	p1=&a,p2=&b;
	if(a<b)
	{
		p1=&b;
		p2=&a;
	}
	printf("a=%d,b=%d\n",a,b);
	printf("max=%d,min=%d\n",*p1,*p2);
	return 0;
}