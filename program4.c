#include <stdio.h>

#define MAX 20

int main()
{
    int stack[MAX];
    int top = -1;
    int n, i;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        top++;
        stack[top] = i;
    }

    while (top >= 0)
    {
        fact = fact * stack[top];
        top--;
    }

    printf("Factorial = %d\n", fact);

    return 0;
}
