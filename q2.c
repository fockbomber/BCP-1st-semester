//2

#include <stdio.h>
#include <math.h>
Void main()
{
    int t,p;
    int  r,s;
    printf(" programme to print simple interest \n");
    printf(" enter the principal \n");
    scanf("%d",&p);
    printf("enter time in years \n");
    scanf("%d",&t);
    printf(" enter the rate in percent \n ");
    scanf("%d",&r);
    s=(p*r*t)/100;
    printf("the simple interest is %d ",s);
   }