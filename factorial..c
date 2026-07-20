#include <stdio.h>

int main ()
{
    int a [100], n, i, pos;
    printf("Enter the number of elements:");
    scanf("%d", &n);

    printf("Enter %d element:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\Enter position to br deleted:");
    scanf("%d", &pos);

    if(pos < i|| pos > n)
    {
        printf("invalid position!\n");
    }
    else
    {
        pos = pos - 1;

        for(i = pos; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        printf("\nEnter of array after deletion are:\n");
        for(i = 0; i < n - 1; i++)
        {
            printf("At position %d value is: %d\n", i+ 1, a[i]);
        }
    }
    return 0;
}
