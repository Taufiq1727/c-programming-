#include<stdio.h>
int main()
{

    float m1,m2,m3,total,average;
    char grade;
    printf("enter marks of three subjects:");
    scanf("%f%f%f",&m1,&m2,&m3);

    //arithematic operations
    total = m1+m2+m3;
    average = total/3;

    //display total and average
    printf("\nTotal Marks = %2f",total);
    printf("\n average marks = %2f",average);

    // determine grade using if-else
    if(average >=90)
        grade = 'A';

        else if(average>=80)
                grade = 'B';

                else if(average >=70)
                grade = 'C';
        else if(average >=60)
            grade ='D';
        else if(average >=50)
            grade ='E';
        else
            grade = 'F';

            //display grade
            printf("\n grade =%c",grade);
        //determine pass/fail

        if(average >=50, m1>=50,m2>=50,m3>=50)
            printf("\nResult:PASS\n");

        else
            printf("\nResult: FAIL\n");

        return 0;
}
