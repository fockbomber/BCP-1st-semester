//9

#include <stdio.h>
#include<math.h>
int main()
{
    int a[20],i,n,sum=0;
    printf("enter the elements number of elements you want in array o\n");
    scanf("%d",&n);
    printf(" enter the elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        }
    printf("sum is %d \n",sum);
    }
    