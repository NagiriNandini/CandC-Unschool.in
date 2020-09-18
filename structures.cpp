#include<stdio.h>
#include<string.h>
struct Employee
{
	char e_name[10];
	int emp_id,emp_exp;
	float salary;	
};
int main()
{
	int i;
	struct Employee e1[5];
    printf("Enter the Employee_name,Employee_Id,Experience,Salary of five employee: \n");
    for(i=0;i<=4;i++)
    {
    	scanf("%s%d%d%f",&e1[i].e_name,&e1[i].emp_id,&e1[i].emp_exp,&e1[i].salary);
	}
	printf("Employee_Name\tEmployee_ID\tExperience\tSalary");
	for(i=0;i<=4;i++)
	{
		printf("\n%s\t\t%d\t\t%d\t\t%f",e1[i].e_name,e1[i].emp_id,e1[i].emp_exp,e1[i].salary);
	}
	
}

