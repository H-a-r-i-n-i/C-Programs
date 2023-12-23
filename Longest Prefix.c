#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 100
#define MAX_STRINGS 100

void longestCommonPrefix(char strs[MAX_STRINGS][MAX_STRING_LENGTH], int strsSize, char result[MAX_STRING_LENGTH]) {
    if (strsSize == 0) {
        result[0] = '\0';
        return;
    }

    int i, j;
    for (i = 0; i < strlen(strs[0]); ++i) {
        for (j = 1; j < strsSize; ++j) {
            if (strs[j][i] != strs[0][i] || strs[j][i] == '\0') {
                strncpy(result, strs[0], i);
                result[i] = '\0';
                return;
            }
        }
    }

    strncpy(result, strs[0], i);
    result[i] = '\0';
}

int main() {
    int strsSize;
    printf("Enter the number of strings: ");
    scanf("%d", &strsSize);

    if (strsSize > MAX_STRINGS) {
        printf("Error: Maximum number of strings exceeded.\n");
        return 1;
    }

    char strs[MAX_STRINGS][MAX_STRING_LENGTH];

    for (int i = 0; i < strsSize; ++i) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", strs[i]);
    }

    char result[MAX_STRING_LENGTH];

    longestCommonPrefix(strs, strsSize, result);

    printf("Longest Common Prefix: %s\n", result);

    return 0;
}
