#include <stdio.h>

int main() {
    char buffer[10];

    printf("Enter a string: ");
    fgets(buffer, sizeof(buffer), stdin);

    printf("You entered: %s\n", buffer);

    return 0;
}