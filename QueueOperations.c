#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#define MAX_SIZE 20
int queue_array[MAX_SIZE];
int rear = -1 , front = -1;
void insert() {
    int add_item;
    if (rear == MAX_SIZE - 1)
        printf("Queue Overflow\n");
    else {
        if (front == -1)
            front = 0;
        printf("Enter the element to be inserted: ");
        scanf("%d", &add_item);
        queue_array[++rear] = add_item;
    }
}

void delete() {
    if (front == -1 || front > rear)
        printf("Queue Underflow\n");
    else {
        printf("Deleted element: %d\n", queue_array[front]);
        front++;
    }
}

void display() {
    if (front == -1)
        printf("Queue is empty\n");
    else {
        printf("Queue elements are :: ");
        for (int i = front; i <= rear; i++){
            printf("%d ", queue_array[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;
            printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }

    }
    return 0;
}