//3

#include <stdio.h>

#include<math.h>

int main()

{

    int a[3][3],i,j,sum=0;

    printf("enter the matrix elements \n");

    for(i=0;i<3;i++)

    {

        for(j=0;j<3;j++)

            scanf("%d",&a[i][j]);

            }

    printf("the matrix is \n");

    for(i=0;i<3;i++)

    {

        for(j=0;j<3;j++)

            printf("%d",a[i][j]);

        printf("\n");

        }

    printf("finding the sum of leading diagonal\n");

    for(i=0;i<3;i++)

    {

        for(j=0;j<3;j++)

            if(i==j)

            {

                sum=sum+a[i][j];

                }

        else

        {

            printf("");

        }

        printf("\n");

    }

    printf("the sum of leading diagonal is %d\n",sum);

    

}