// 7. wap to implement queue using array
#include <stdio.h>
#define MAX 5

int main() {
    int queue[MAX], front = -1, rear = -1;
    int choice, item, i;

    while (1) {
        printf("\n1.Enqueue  2.Dequeue  3.Display  4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (rear == MAX - 1) {
                    printf("Queue Overflow");
                } else {
                    printf("Enter item: ");
                    scanf("%d", &item);

                    if (front == -1)
                        front = 0;

                    rear++;
                    queue[rear] = item;
                }
                break;

            case 2:
                if (front == -1 || front > rear) {
                    printf("Queue Underflow");
                } else {
                    printf("Deleted item: %d", queue[front]);
                    front++;
                }
                break;

            case 3:
                if (front == -1 || front > rear) {
                    printf("Queue is empty");
                } else {
                    printf("Queue elements: ");
                    for (i = front; i <= rear; i++) {
                        printf("%d ", queue[i]);
                    }
                }
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice");
        }
    }
}