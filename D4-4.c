#include <stdio.h>

void findSecondLargest(int arr[], int N) {
    int first = arr[0], second = -1;

    for (int i = 1; i < N; ++i) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] < first && arr[i] > second) {
            second = arr[i];
        }
    }

    if (second == -1) {
        printf("There is no second largest distinct element.\n");
    } else {
        printf("The second largest distinct element is: %d\n", second);
    }
}

int main() {
    int N;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; ++i) {
        scanf("%d", &arr[i]);
    }

    findSecondLargest(arr, N);

    return 0;
}
