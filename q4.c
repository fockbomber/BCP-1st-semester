//4

#include <stdio.h>

#include<math.h>

int main()

{

    int a[3][3],b[3][3],i,j;

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

    printf("printing the lower triangle \n");

    for(i=0;i<3;i++)

    {

        for(j=0;j<3;j++)

            if(i<j)

            {

                printf("0");

                

            }

        else

        {

            printf("%d",a[i][j]);

        }

        printf("\n");

    }

        

        printf("printing the upper triangle \n");

        for(i=0;i<3;i++)

        {

            for(j=0;j<3;j++)

                if(i>j)

                {

                    printf("0");

                    

                }

                else

                {

                    printf("%d",a[i][j]);

                }

            printf("\n");

    }}