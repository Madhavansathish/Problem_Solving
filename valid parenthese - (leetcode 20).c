#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if the string of brackets is valid
bool isValid(char* s) {
    int len = strlen(s);
    char stack[len];   // stack for opening brackets
    int top = -1;      // -1 means stack is empty

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        // If it's an opening bracket, push onto stack
        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        } 
        // If it's a closing bracket
        else {
            if (top == -1) return false;   // no matching opening bracket
            char open = stack[top--];      // pop top element

            // Check if it matches the closing bracket
            if ((ch == ')' && open != '(') ||
                (ch == '}' && open != '{') ||
                (ch == ']' && open != '[')) {
                return false;
            }
        }
    }

    // Stack should be empty if all brackets matched
    return top == -1;
}

int main() {
    char s[] = "([])";  // Example input string

    if (isValid(s)) {
        printf("%s -> true\n", s);
    } else {
        printf("%s -> false\n", s);
    }

    return 0;
}
