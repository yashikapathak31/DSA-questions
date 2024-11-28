#include <stdio.h>
#include <string.h>

int isValid(char* s) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        } else if (c == ')' || c == '}' || c == ']') {
            if (top == -1) {
                return 0;
            }
            char topChar = stack[top--];

            if ((c == ')' && topChar != '(') ||
                (c == '}' && topChar != '{') ||
                (c == ']' && topChar != '[')) {
                return 0;
            }
        }
    }

    return top == -1;
}

int main() {
    char s[10001];
    printf("Enter a string with brackets: ");
    scanf("%s", s);

    if (isValid(s)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
