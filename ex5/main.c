#include <stdio.h>

int main() {
    printf("Lowercase\tASCII\tUppercase\tASCII\n");
    printf("------------------------------------------------\n");
    
    for (int i = 0; i < 26; i++) {
        char lowercase = 'a' + i;
        char uppercase = 'A' + i;
        printf("%c\t\t%d\t%c\t\t%d\n", lowercase, lowercase, uppercase, uppercase);
    }

    return 0;
}
