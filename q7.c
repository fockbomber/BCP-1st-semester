//7

#include <stdio.h>
#include<math.h>
int main()
{
    int a[2][2],i,j,t[2][2];
    printf("enter the elements of array\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);
        
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%d",a[i][j]);
        printf("\n");
        
    }
    printf("\n");
    printf("the transpose \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            t[j][i]=a[j][i];
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%d",t[j][i]);
        printf("\n");
    }
    printf("\n");
    
   
   
}
