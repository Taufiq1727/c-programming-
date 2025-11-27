#include<stdio.h>
#include<string.h>
struct Book{
    int id;
    char title;
    char authour;

};
int main (){
    struct Book b1 ={101,"Cprogramming", "dennis ritchie"};
    struct Book b2 ={102,"data structures", "mark weiss"};
    struct Book b3 ={103,"Operation Systems","salbirschatz"};

    struct Book *books[3] ={&b1,&b2,&b3};
    int searchID,i,found = 0;
    printf("enter book ID to search :");
    scanf("%d",&searchID);
    for(i = 0;i<3;i++){
        if(books[i]->id == searchID){
            printf("\nBook Found :\n");
            printf("ID:%d\n", books[i]->id);
            printf("Author :%s\n",books[i]->authour);
            found = 1;
            break;
        }
    }
if(!found)
printf("\nBook Not Found\n");
return 0;

}