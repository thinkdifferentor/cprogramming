#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student//student node
{
	int no;
	char name[10];
	char sex[3];
	int age;
	char mobile[13];
	char QQ[13];
	char address[80];
	struct student *next;
}STU;

int main()
{
		STU *stu1;
		printf("输入同学的信息:\n");
		printf("姓名:");
		scanf("%s",stu1->name);
		
		printf("学号:");
		scanf("%d",&stu1->no);
		
		printf("年龄:");
		scanf("%d",&stu1->age);
		
		printf("性别:");
		scanf("%s",stu1->sex);
		
		printf("电话:");
		scanf("%s",stu1->mobile);
		
		printf("QQ:");
		scanf("%s",stu1->QQ);
		
		printf("地址:");
		scanf("%s",stu1->address);
		
		printf("\n该同学的信息为:\n");
		printf("姓名:%s\n",stu1->name);
		printf("学号:%d\n",stu1->no);
		printf("性别:%s\n",stu1->sex);
		printf("年龄:%d\n",stu1->age);
		printf("电话:%s\n",stu1->mobile);
		printf("  QQ:%s\n",stu1->QQ);
		printf("地址:%s\n",stu1->address);
		return 0;
}