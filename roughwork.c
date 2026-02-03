#include<stdio.h>
struct cars{
char name[20];
char model[20];
float prize;
int cc;
int manifacturing_date;
};
int main()
{
     struct cars c1={"mersedies","benz",5000000,2369,2003};
           printf("name:%s\n",c1.name);
           printf("model:%s\n",c1.model);
           printf("prize:%2f\n",c1.prize);
           printf("cc:%d\n",c1.cc);
           printf("manifacturing_date:%d\n",c1.manifacturing_date);
           printf("\n-------------------\n");

           struct cars c2={"tata","lorry",508598,2485,2008};
               printf("name:%s\n",c2.name);
               printf("model:%s\n",c2.model);
               printf("prize:%2f",c2.prize);
               printf("cc:%d\n",c2.cc);
               printf("manifacturing_date:%d\n",c2.manifacturing_date);
               printf("\n----------\n");



           struct cars c3={"maruthi","HONDA",5655951,2548,2002};
               printf("name:%s\n",c3.name);
               printf("model:%s\n",c3.model);
               printf("prize:%2f",c3.prize);
               printf("cc:%d\n",c3.cc);
               printf("manifacturing_date:%d\n",c3.manifacturing_date);
               printf("\n-------------\n");



           struct cars c4={"bmw","S series",5548488,8655,2007};
               printf("name:%s\n",c4.name);
               printf("model:%s\n",c4.model);
               printf("prize:%2f",c4.prize);
               printf("cc:%d\n",c4.cc);
               printf("manifacturing_date:%d\n",c4.manifacturing_date);
return 0;
}
