#include <stdio.h>

int main() {
    char s[100];
    scanf("%s", &s);

    // Check if the string has at least 7 characters
    if (strlen(s) >= 7) {
        printf("%c%c%c\n", s[1], s[4], s[6]);
    } else {
        printf("Input string is too short\n");
    }
    
}
