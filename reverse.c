#include<stdio.h>
int main()
{
    int num,b,rev=0,dum;
    printf(" Enter the number that is to be reversed\n");
    scanf("%d",&num);
    dum=num;
    
    while(num>0)
    {
        b=num%10;
        rev= rev*10 + b;
        num=num/10;
    }
    
    printf("the reverse of %d is %d",dum,rev);
    
}
