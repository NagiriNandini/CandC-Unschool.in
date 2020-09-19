#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int random=0;
	srand(time(0));
	random=rand()%6+1;
	printf("%d",random);
	return 0;
}
