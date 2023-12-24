#include <stdio.h>
#include <stdlib.h>

int* findDuplicates(int a[], int N, int* size) {
    int* duplicates = NULL;
    int maxElement = N - 1;

    for (int i = 0; i < N; ++i) {
        int index = a[i] % maxElement;
        a[index] += N;
    }

    for (int i = 0; i < N; ++i) {
        if ((a[i] / N) > 1) {
            duplicates = (int*)realloc(duplicates, (*size + 1) * sizeof(int));
            duplicates[(*size)++] = i;
        }
    }

    if (*size == 0) {
        duplicates = (int*)malloc(sizeof(int));
        duplicates[(*size)++] = -1;
    }

    return duplicates;
}

int main() {
    int N;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int *a = (int *)malloc(N * sizeof(int));

    printf("Enter the elements of the array (0 to N-1):\n");
    for (int i = 0; i < N; ++i) {
        scanf("%d", &a[i]);
    }

    int size = 0;
    int* result = findDuplicates(a, N, &size);

    printf("Duplicates: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(a);
    free(result);

    return 0;
}
