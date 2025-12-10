#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char *s) {
    int n = strlen(s);
    int len = 0;
    int i = n - 1;

    // Step 1: skip trailing spaces
    while (i >= 0 && s[i] == ' ')
        i--;

    // Step 2: count the last word
    while (i >= 0 && s[i] != ' ') {
        len++;
        i--;
    }

    return len;
}

int main() {
    char s[10005];
    // Read a full line (including spaces)
    fgets(s, sizeof(s), stdin);

    // Remove newline if present
    s[strcspn(s, "\n")] = '\0';

    printf("%d\n", lengthOfLastWord(s));
    return 0;
}
