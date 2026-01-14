#include<stdio.h>
#include<stdlib.h>
#define size 5 
int queue[size];
int front = -1,rear = -1;
void enqueue(int value){
    if(rear == size - 1)
    printf("queue overflow! cannot insert %d\n", value);
    else{
        if(front == -1) front = 0;
        queue[++rear] = value;
        printf("%d enqueued into queue\n", value);

    }
}
void dequeue(){
    if(front == -1 || front > rear)
    printf("queue underflow! no element to remove\n");
    else 
    printf("%d dequeue from queue\n ", queue[front++]);
}
void display()
{
    if(front == -1 || front > rear)
    printf("queue is empty\n");
    else{
        printf("queue elements :");
        for(int i = front; i<= rear; i++)
        printf("%d", queue[i]);
        printf("\n");

    }
}    
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}