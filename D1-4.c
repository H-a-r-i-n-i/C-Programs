#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isLowerCase(char c) {
    return c >= 'a' && c <= 'z';
}

bool isUpperCase(char c) {
    return c >= 'A' && c <= 'Z';
}

bool isSpecialChar(char c) {
	int i;
    char specialChars[] = "!@#$%^&*()-+";
    for ( i = 0; i < strlen(specialChars); i++) {
        if (c == specialChars[i]) {
            return true;
        }
    }
    return false;
}

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

int passwordStrength(char password[]) {
	int i;
    int length = strlen(password);
    bool hasLowerCase = false;
    bool hasUpperCase = false;
    bool hasSpecialChar = false;
    bool hasDigit = false;

    if (length < 8) {
        return 0;
    }

    for (i = 0; i < length; i++) {
        if (isLowerCase(password[i])) {
            hasLowerCase = true;
        } else if (isUpperCase(password[i])) {
            hasUpperCase = true;
        } else if (isSpecialChar(password[i])) {
            hasSpecialChar = true;
        } else if (isDigit(password[i])) {
            hasDigit = true;
        }
    }

   
    if (hasLowerCase && hasUpperCase && hasSpecialChar && hasDigit) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    char password[50];
    printf("Enter your password: ");
    scanf("%s", password);

    int strength = passwordStrength(password);

    if (strength == 1) {
        printf("Password is strong.\n");
    } else {
        printf("Password is weak. It must have at least 8 characters, one uppercase letter, one lowercase letter, one digit, and one special character.\n");
    }

    return 0;
}

