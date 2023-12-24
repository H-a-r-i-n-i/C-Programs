#include <stdio.h>

void findFirstLastOccurrence(int arr[], int n, int x) {
    int first = -1, last = -1;

    for (int i = 0; i < n; ++i) {
        if (arr[i] == x) {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    printf("%d %d\n", first, last);
}

int main() {
    int n, x;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the sorted array:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find occurrences for: ");
    scanf("%d", &x);

    findFirstLastOccurrence(arr, n, x);

    return 0;
}
