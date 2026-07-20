#include <stdio.h>

int main() {
    int arr[10], i, search, found = 0;

    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray Elements:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nEnter element to search: ");
    scanf("%d", &search);

    for(i = 0; i < 10; i++) {
        if(arr[i] == search) {
            printf("Element found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element not found.");

    return 0;
}
