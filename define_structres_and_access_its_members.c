#include<stdio.h>
struct student
{
    int id;
    char name[20];
    float marks;
};
int main()
{
    struct student s1 = {101,"Virat Kohli",89.5};
    printf("ID: %d\n",s1.id);
    printf("name:%s\n",s1.name);
    printf("marks:%2f\n",s1.marks);
    printf("\n----------\n");

    struct student s2 = {201,"Rohit Sharma", 90.8};
    printf("ID: %d\n",s2.id);
    printf("name:%s\n",s2.name);
    printf("marks:%2f\n",s2.marks);
    printf("\n----------\n");


    struct student s3 = {301,"MS Dhoni", 76.9};
    printf("ID: %d\n",s3.id);
    printf("name:%s\n",s3.name);
    printf("marks:%2f\n",s3.marks);

    return 0;
}
