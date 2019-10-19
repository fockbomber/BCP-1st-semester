//8

#include <stdio.h>
#include<math.h>
int main()
{
    int a[20],i,n,b[20];
    printf("enter the  number of elements you want in array o\n");
    scanf("%d",&n);
    printf(" enter the elements of array a[] \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
        }
    printf("elements of array b[] are\n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",b[i]);
    }
    
    
}
