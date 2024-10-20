#include <stdio.h>
#include <string.h>

#define CHAR_COUNT 26  

void countChars(const char *str, int *count) {
    while (*str) {
        count[*str - 'a']++;  
        str++;
    }
}

int areAnagrams(const char *str1, const char *str2) {
    
    if (strlen(str1) != strlen(str2)) {
        return 0;  
    }

    
    int count1[CHAR_COUNT] = {0};
    int count2[CHAR_COUNT] = {0};

    countChars(str1, count1);
    countChars(str2, count2);

    
    for (int i = 0; i < CHAR_COUNT; i++) {
        if (count1[i] != count2[i]) {
            return 0;  
        }
    }
    return 1;  
}

int main() {
    const char *str1 = "listen";
    const char *str2 = "silent";

    if (areAnagrams(str1, str2)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}
