#include<stdio.h>
void printdet();
struct employee
{
	int empno;
	char empname[100];
	char depname[100];
	float salary;
};
int main()
{
	int i;
	struct employee s[20];
	for(i=0;i<20;i++)
	{
		printf("Enter details for employee %d\n",i+1);
		printf("Enter employee number:");
		scanf("%d",&s[i].empno);
		printf("Enter employee name:");
		scanf("%s",s[i].empname);
		printf("Enter department name:");
		scanf("%s",s[i].depname);
		printf("Enter salary:");
		scanf("%f",&s[i].salary);
	}
    printdet(s);
    return 0;
}
void printdet(struct employee arr[])
{
	int i;
	printf("\n\n******************\n\n");
	for(i=0;i<20;i++)
	{
		printf("Employee %d\n",i+1);
		printf("Employee number:%d\n",arr[i].empno);
		printf("Employee name:%s\n",arr[i].empname);
		printf("Department name:%s\n",arr[i].depname);
		printf("Salary:%f\n",arr[i].salary);
	}
}
