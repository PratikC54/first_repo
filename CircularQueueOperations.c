#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#define MAX_SIZE 20
int rear=-1 , front=-1;
int circular_array[MAX_SIZE];
void insert(){
    int add_item;
    if (rear = MAX_SIZE-1){
        printf("Queue is full");
    }

    else if (front==-1 && rear ==-1){
            front=0 , rear=0 ;
        }   
        else if (rear=-1){
            rear=0;
        }
        else {
            rear+=1;
        }
        printf("Enter the number to insert ::");
        scanf("%d",&add_item);
        circular_array[rear]= add_item;
}

// void Delete(){
//     if (front ==-1 || fro)
//     {
//         /* code */
//     }
    
// }
// void Display(){
//     if ()
//     {
//         /* code */
//     }
    
// }
int main(){
        int choice;
            printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
                default:
                printf("Invalid choice! Try again.\n");
        }
    }
}