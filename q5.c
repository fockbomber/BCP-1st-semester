//Matrix Multiplication

#include <stdio.h>
#include<math.h>
int main()
{
    int a[2][2],i,j,c[2][2],b[2][2];
    printf("enter the elements of first  array\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);
        
    }
    printf("enter the elements of second array\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
           scanf("%d",&b[i][j]);
        
    }
    printf("\n");
    printf("the product of both the array is \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            c[i][j]=a[i][j]*b[i][j];
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%d",c[i][j]);
        printf("\n");
            
    }
    printf("\n");
}
    