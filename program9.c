#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void insert()
{
    int value;

    if (rear == MAX - 1)
    {
        printf("Queue is full.\n");
    }
    else
    {
        printf("Enter value: ");
        scanf("%d", &value);

        if (front == -1)
        {
            front = 0;
        }

        rear++;
        queue[rear] = value;

        printf("Value inserted.\n");
    }
}

void delete()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Deleted value = %d\n", queue[front]);
        front++;

        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue elements:\n");

        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n----- QUEUE MENU -----\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
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
                printf("Program ended.\n");
                break;

            default:
                printf("Wrong choice.\n");
        }

    } while (choice != 4);

    return 0;
}
