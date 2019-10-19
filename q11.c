//11
#include <stdio.h>
#include<math.h>
int main()
{
    float m1,m2,m3,m4,m5,marks;
    char a;
    int p=1;
    printf("enter the name of student\n");
    scanf("%c",&a);
    printf("enter the marks of subject a\n");
    scanf("%f",&m1);
    printf("enter the marks of subject b\n");
    scanf("%f",&m2);
    printf("enter the marks of subject c\n");
    scanf("%f",&m3);
    printf("enter the marks of subject d\n");
    scanf("%f",&m4);
    printf("enter the marks of subject e\n");
    scanf("%f",&m5);
    marks=m1+m2+m3+m4+m5;
    printf("marks are %f\n",marks);
    p=100*(marks/5);
    printf("percentage is %d \n",p);
    {
        if(p<100 && p>85)
            printf("grade is S");
        else
        if (p<85 && p>75)
                printf("grade is A");
        else
        if(p<75 && p>65)
            printf("grade is B ");
        else
            if(p>55 && p<65)
                printf("grade is C");
        else
            if(p>50 && p<65)
                printf("grade is  D");
        else
            if(p < 50)
                printf("grade is E");
    }}
    
