#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee emp[5];
    float total = 0, average;
    int i;

    
    for(i = 0; i < 5; i++) {
        printf("Enter Employee %d ID: ", i+1);
        scanf("%d", &emp[i].id);

        printf("Enter Employee %d Name: ", i+1);
        scanf("%s", emp[i].name);

        printf("Enter Employee %d Salary: ", i+1);
        scanf("%f", &emp[i].salary);

        total += emp[i].salary;
        printf("\n");
    }

    
    printf("\n--- Employee Details ---\n");
    for(i = 0; i < 5; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n",
               emp[i].id, emp[i].name, emp[i].salary);
    }

    
    average = total / 5;
    printf("\nAverage Salary = %.2f\n", average);

    return 0;
}