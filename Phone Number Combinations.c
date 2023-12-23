#include <stdio.h>

#define MAX_LENGTH 4

const char mapping[10][4] = {
    "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
};

void generateCombinations(char digits[MAX_LENGTH], int index, char current[MAX_LENGTH + 1]) {
    if (digits[index] == '\0') {
        current[index] = '\0';
        printf("%s\n", current);
        return;
    }

    int digit = digits[index] - '0';
    for (int i = 0; mapping[digit][i] != '\0'; ++i) {
        current[index] = mapping[digit][i];
        generateCombinations(digits, index + 1, current);
    }
}

int main() {
    char digits[MAX_LENGTH];
    printf("Enter digits (2-9): ");
    scanf("%s", digits);

    char current[MAX_LENGTH + 1];
    generateCombinations(digits, 0, current);

    return 0;
}
