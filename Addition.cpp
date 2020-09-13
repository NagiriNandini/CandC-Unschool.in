#include<stdio.h>

int main()
{
	int x,y,z,sum;
	printf("Enter three numbers:");
	scanf("%d%d%d",&x,&y,&z);
	sum=x+y+z;
	printf("Sum of %d+%d+%d is %d",x,y,z,sum);
	return 0;
}
