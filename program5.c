#include <stdio.h>

#define MAX 20

int main()
{
    int stack[MAX];
    int top = -1;
    int base, power;
    int i;
    int answer = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter power: ");
    scanf("%d", &power);

    for (i = 1; i <= power; i++)
    {
        top++;
        stack[top] = base;
    }

    while (top >= 0)
    {
        answer = answer * stack[top];
        top--;
    }

    printf("Answer = %d\n", answer);

    return 0;
}
