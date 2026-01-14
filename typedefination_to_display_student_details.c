#include <stdio.h>
#include <string.h>


typedef struct {
    int id;
    char name[50];
    int marks;
} Student;

int main(){
    
    Student students[4];

    
    for (int i = 0; i < 4; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
        printf("\n");
    }

       printf("\n--- Student Details ---\n");
    for (int i = 0; i < 4; i++) {
        printf("ID: %d\n, Name: %s\n, Marks: %d\n", students[i].id, students[i].name, students[i].marks);
    }
   
    int maxIndex = 0;
    
    int maxMarks = students[0].marks;
    for (int i = 1; i < 4; i++) {
        if (students[i].marks > maxMarks) {
            maxMarks = students[i].marks;
        }
    }

    for (int i = 0; i < 4; i++) {
        if (students[i].marks == maxMarks) {
            printf("\n--- Student with Highest Marks ---\n");
            printf("ID: %d, Name: %s, Marks: %d\n", students[i].id, students[i].name, students[i].marks);
            return 0; // exit to avoid the later printf that used maxIndex
        }
    }

    
}