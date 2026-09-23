#include <stdio.h>
#include <string.h>

int main() {
    char str[100], stack[100];
    int top = -1, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
        stack[++top] = str[i];

    printf("Reversed string: ");
    while (top != -1)
        printf("%c", stack[top--]);

    return 0;
}