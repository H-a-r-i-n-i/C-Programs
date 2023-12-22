#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);

    int n = 0;
    while (str[n] != '\0' && str[n] != '\n') {
        n++;
    }

    int count = 1, j;
    char num[10];

    for (int i = 0; i < n; i++) {
        if (!(str[i] >= 'a' && str[i] <= 'z')) {
            j = i;
            while (!(str[j] >= 'a' && str[j] <= 'z')) {
                num[j - i] = str[j];
                j++;
                if (j == n) {
                    break;
                }
            }
            num[j - i] = '\0';
            count =strlen(num);
            for (int c = 0; c < count; c++) {
                printf("%c", str[i - 1]);
            }

            i = j;

            num[0] = '\0';
        }
    }

    return 0;
}
