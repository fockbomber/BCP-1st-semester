//10
#include <stdio.h>
#include<math.h>
int main()
{
    int i,n,p=1,sum=0;
    printf("PROGRAMME TO PRINT FACTORIAL OF A NUMBER \n");
    printf("enter the number  ");
    scanf("%d",&n);
    for(i=n-1;i>0;i--)
    {
        p=i*n;
        sum=sum+p;
    }
    printf("the factorial of given number is %d \n",sum);
    
}