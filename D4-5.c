#include <stdio.h>

int checkSumExists(int arr[], int N, int X) {
    int hashTable[100000] = {0};

    for (int i = 0; i < N; ++i) {
        if (X - arr[i] >= 0 && hashTable[X - arr[i]] == 1) {
            return 1; 
        }
        hashTable[arr[i]] = 1;
    }
    return 0;
}

int main() {
    int N, X;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of X: ");
    scanf("%d", &X);

    if (checkSumExists(arr, N, X)) {
        printf("Yes, there exist two elements whose sum is exactly %d.\n", X);
    } else {
        printf("No, there are no two elements whose sum is exactly %d.\n", X);
    }

    return 0;
}
