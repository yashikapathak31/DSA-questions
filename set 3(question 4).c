#include <stdio.h>
#include <string.h>

int checkValidString(char* s) {
    int balance_min = 0, balance_max = 0;
    int len = strlen(s);
    
    for (int i = 0; i < len; i++) {
        char c = s[i];
        
        if (c == '(') {
            balance_min++;
            balance_max++;
        } else if (c == ')') {
            balance_min--;
            balance_max--;
        } else {  
            balance_min--;
            balance_max++;
        }
        
        if (balance_min < 0) {
            balance_min = 0;
        }
  
        if (balance_max < 0) {
            return 0; 
        }
    }

    return balance_min == 0;
}

int main() {

    char test1[] = "()";
    char test2[] = "(())";
    char test3[] = ")(";
    char test4[] = "()(";
    
    printf("Test 1: %s -> %s\n", test1, checkValidString(test1) ? "true" : "false");
    printf("Test 2: %s -> %s\n", test2, checkValidString(test2) ? "true" : "false");
    printf("Test 3: %s -> %s\n", test3, checkValidString(test3) ? "true" : "false");
    printf("Test 4: %s -> %s\n", test4, checkValidString(test4) ? "true" : "false");
    
    return 0;
}
