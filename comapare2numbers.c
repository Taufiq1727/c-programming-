#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a:");
    scanf("%d",&a);

    printf("enter b:");
    scanf("%d",&b);

    if(a>b)

        printf("a is greater than b");


    else if (b>a)

        printf("b is greater than a");
    else

        printf("both are equal");

    return 0;
}
