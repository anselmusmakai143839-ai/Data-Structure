#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    int n, answer;

    printf("Enter a number: ");
    scanf("%d", &n);

    answer = factorial(n);

    printf("Factorial = %d\n", answer);

    return 0;
}
