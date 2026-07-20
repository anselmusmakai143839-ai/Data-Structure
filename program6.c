#include <stdio.h>

int main() {
    int arr[20], n, pos, value, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter value: ");
    scanf("%d", &value);

    for(i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = value;

    printf("New Array:\n");

    for(i = 0; i <= n; i++)
        printf("%d ", arr[i]);

    return 0;
}
