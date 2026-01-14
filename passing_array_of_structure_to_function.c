#include<stdio.h>
struct stud{
    int id;
    char name[20]
};
void display(struct stud s[],int n)
{
    for(int i=0;i<n;i++){
        printf("ID : %d\n",s[i].id);
        printf("Name : %s\n",s[i].name);
    }
}
int main(){
    struct stud [3] 
    {
        {101,"Anu"},
        {102,"Avi"},
        {103,"Asha"}
    };
    display(s,3);
    return 0;
}