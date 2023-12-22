#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    char res[1000] = "";
    int n = strlen(s);
    int scr;
    int stars = 1;
    int count = 0;
    int flag = 0;
    printf("Enter String:");
    scanf("%s",&s);
    printf("Enter screen length");
    scanf("%d",&scr);
    for (int i = 0; i < n; i++) {
        if (s[i] == ' ')
            count++;
    }
    
    int size = scr - (n - count);
    int fill = size / count;
    int remainder = size % count;

    for (int i = 0; i < n; i++) {
        if (s[i] != ' ') {
            res[strlen(res)] = s[i];
        }
        if (s[i] == ' ') {
            for (int k = 1; k <= fill; k++) {
                if (stars == size) {
                    break;
                }
                res[strlen(res)] = '*';
                stars++;
            }
            if (flag == 0) {
                for (int r = 1; r <= remainder; r++) {
                    res[strlen(res)] = '*';
                    flag = 1;
                }
            }
        }
    }

    printf("%s %d\n", res, strlen(res));

    return 0;
}

