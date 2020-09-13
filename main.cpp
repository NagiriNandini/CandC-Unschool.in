#include <stdio.h>

int main()
{
    int x,y,sum,diff,product,div1,div2;
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    sum=x+y;
    printf("Sum of %d and %d is %d\n",x,y,sum);
    diff=x-y;
    printf("Difference of %d and %d is %d\n",x,y,diff);
    product=x*y;
    printf("Product of %d and %d is %d\n",x,y,product);
    div1=x/y;
    div2=x%y;
    printf("On dividing %d by %d quotient is %d\n",x,y,div1);
    printf("On dividing %d by %d remainder is %d\n",x,y,div2);
    return 0;
}
