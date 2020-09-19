#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main(void)
{
	char s1[20],s2[20],s3[20],s4[20];
	int n,m,random=0;
	float val1=1.6,number,squareroot;
	double x=4.5,y=1.2,result;
	printf("Enter first string: \n");
	scanf("%s",&s1);
	printf("Enter seconf string: \n");
	scanf("%s",&s2);
	printf("Enter the third string: \n");
	scanf("%s",&s3);
	printf("Enter the fourth string: \n");
	scanf("%s",&s4);
	printf("Enter a number: ");
	scanf("%1f",&number);
	//string copying
	strcpy(s1,s2);
	printf("Copied string is: %s\n",s1);
	//string comparing
	n=strcmp(s1,s2);
	{
		if(n==0)
		{
			printf("Strings are equal\n");
		}
		else if(n>0)
		{
			printf("First string is greater thean second string\n");
		}
		else
		{
			printf("Second string is greater then first string\n");
		}		
	}
	//stringth length
	m=strlen(s1);
	printf("Length=%d\n",m);
	//string reverse
    strrev(s2);
	printf("Reverse of the string is: %s\n",s2);
	//string lowercase
	strlwr(s3);
	printf("Lower case of the string is: %s\n",s3);
	//string uppercase
	strupr(s4);
	printf("Upper case of the string is:%s\n",s4); 
	//pow function
	result=pow(x,y);
	printf("Result of power : %.2lf\n",result);
	//sqrt funstion
	squareroot=sqrt(number);
	printf("Square oot of %f=%f\n",number,squareroot);
	//ceil function
	printf("value1=%f\n",ceil(val1));
	//floor function
	printf("value1=%f\n",floor(val1));
	//random function
	srand(time(0));
	random=rand()%6+1;
	printf("%d",random);
	
	return 0;	
}
