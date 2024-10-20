#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isPalindrome(char *s) {
    int left = 0, right = strlen(s) - 1;
    while (left < right) {
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;
        if (tolower(s[left++]) != tolower(s[right--])) return 0; 
    }
    return 1; 
}

int main() {
    char *s1 = "A man, a plan, a canal: Panama";
    char *s2 = "race a car";
    printf("Input: \"%s\" -> Output: %s\n", s1, isPalindrome(s1) ? "true" : "false");
    printf("Input: \"%s\" -> Output: %s\n", s2, isPalindrome(s2) ? "true" : "false");
    return 0;
}

