#include <stdio.h>

int findMin(int a[], int n)
{
    int min;

    if (n == 1)
    {
        return a[0];
    }

    min = findMin(a, n - 1);

    if (a[n - 1] < min)
    {
        return a[n - 1];
    }
    else
    {
        return min;
    }
}

int findMax(int a[], int n)
{
    int max;

    if (n == 1)
    {
        return a[0];
    }

    max = findMax(a, n - 1);

    if (a[n - 1] > max)
    {
        return a[n - 1];
    }
    else
    {
        return max;
    }
}

int main()
{
    int a[10];
    int n;
    int i;
    int minimum, maximum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    minimum = findMin(a, n);
    maximum = findMax(a, n);

    printf("Minimum = %d\n", minimum);
    printf("Maximum = %d\n", maximum);

    return 0;
}
