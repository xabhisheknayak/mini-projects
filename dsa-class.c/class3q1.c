//5. wrtie a program to implement linear list of item and store in array
#include <stdio.h>

int main() {
    int list[100], n, i;

    printf("Enter number of items: ");
    scanf("%d", &n);

    printf("Enter items:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }

    printf("Linear list is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", list[i]);
    }

    return 0;
}