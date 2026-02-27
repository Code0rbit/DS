#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Enqueue Operation
void enqueue() {
    int value;

    if (rear == SIZE - 1) {
        printf("Queue is Full (Overflow)\n");
    } else {
        printf("Enter value: ");
        scanf("%d", &value);

        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        printf("%d inserted into queue\n", value);
    }
}

// Dequeue Operation
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty (Underflow)\n");
    } else {
        printf("%d deleted from queue\n", queue[front]);
        front++;
    }
}

// Peek Operation
void peek() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty\n");
    } else {
        printf("Front element is: %d\n", queue[front]);
    }
}

// isEmpty Operation
void isEmpty() {
    if (front == -1 || front > rear)
        printf("Queue is Empty\n");
    else
        printf("Queue is Not Empty\n");
}

// isFull Operation
void isFull() {
    if (rear == SIZE - 1)
        printf("Queue is Full\n");
    else
        printf("Queue is Not Full\n");
}

// Display Queue
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;

    do {
        printf("\n--- QUEUE MENU ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. isEmpty\n");
        printf("5. isFull\n");
        printf("6. Display\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                isEmpty();
                break;
            case 5:
                isFull();
                break;
            case 6:
                display();
                break;
            case 7:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice\n");
        }

    } while(choice != 7);

    return 0;
}
