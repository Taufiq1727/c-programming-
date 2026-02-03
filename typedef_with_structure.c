#include <stdio.h>

typedef struct
{
    int emp_id;
    char name[20];
    float salary;
} employee;

int main()
{
    employee e1 = {1001, "kiran", 44000.5};

    printf("Employee Id : %d\n", e1.emp_id);
    printf("Employee Name : %s\n", e1.name);
    printf("Employee Salary : %.2f\n", e1.salary);

    return 0;
}
