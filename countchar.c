
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int count = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';
    
    printf("Enter character to count: ");
    scanf("%c", &ch);
    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    
    printf(" '%c' appears %d times in%s.\n", ch, count,str);
    
    return 0;
}