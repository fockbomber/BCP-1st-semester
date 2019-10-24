//2
//Programme to calculate Simple interest

#include <stdio.h>
#include <math.h>
Void main()
{
    int t,p;
    int  r,s;
    printf("Programme to print Simple Interest \n");
    printf("Enter the principal \n");
    scanf("%d",&p);
    printf("Enter time in years \n");
    scanf("%d",&t);
    printf("Enter the rate in percent \n ");
    scanf("%d",&r);
    s=(p*r*t)/100;
    printf("The simple interest is %d ",s);
   }