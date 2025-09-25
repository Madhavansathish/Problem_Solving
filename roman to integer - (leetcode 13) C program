#include <stdio.h>

int value(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default:  return 0;
    }
}

int romanToInt(char* s) {
    int sum = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        int curr = value(s[i]);
        int next = value(s[i + 1]);   // value('\0') = 0
        if (curr < next)
            sum -= curr;
        else
            sum += curr;
    }
    return sum;
}

int main(void) {
    // Hard-coded example so no input is required
    char s[] = "IV";   // 1994
    int result = romanToInt(s);

    printf("Roman numeral: %s\n", s);
    printf("Integer value: %d\n", result);
    return 0;
}
