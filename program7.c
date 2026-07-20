#include <stdio.h>

int main() {
    int arr[20], n, pos, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];

    printf("Array after deletion:\n");

    for(i = 0; i < n - 1; i++)
        printf("%d ", arr[i]);

    return 0;
}
