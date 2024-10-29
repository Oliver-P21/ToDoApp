#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Reading char input...");
    char buffer[100];
    char ch;
    scanff("%c", ch);
    printf("Now reading whole string");
    fgets(buffer, 100, stdin);
    printf("%s\n", buffer);
    return 0;
}