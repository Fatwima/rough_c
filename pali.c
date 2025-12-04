
#include <stdio.h>,<stdbool.h>
#include <stdbool.h>,<string.h>



int main() {
    char str[100];
    int i, length;
    bool isPalindrome = true;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    length = strlen(str);
    
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    
    if (isPalindrome) {
        printf("\"%s\" is a palidrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }
    
    return 0;
}