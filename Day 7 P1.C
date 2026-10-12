#include <stdio.h>

int main() {
    char ch;

    printf("Enter a lowercase character: ");
    scanf("%c", &ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("It is a vowel.\n");
            break;

        default:
            printf("It is a consonant.\n");
            break;
    }

    return 0;
}
