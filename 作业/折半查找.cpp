#include<stdio.h>
int zheban(int a[],int n,int x);
int main()
{
	int i,j,k,a[15];
	printf("请按由大到小的顺序输入十五个数:\n");
	for(i=0;i<15;i++)
	{
		scanf("%d",&a[i]);
	}	
	printf("请输入你要查找的数:");
	scanf("%d",&j);
	
	k=zheban(a,15,j);
	if(k==-1)
	{
		printf("没有找到你想要的数!\n");
	}
	else
	{
		printf("你要查找的数在第%d个元素\n",k);		
	}
	return 0;
}

int zheban(int a[],int n,int x)
{
	int low,mid,high;
	low=0;
	high=n;
	while(high>=low)
	{
		mid=(low+high)/2;
		if(a[mid]==x)
		{
			return mid;	
		} 
		if(a[mid]>x)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return -1;
}