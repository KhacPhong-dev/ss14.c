#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Hello World";
    int length = strlen(chuoi);
    printf("Chuoi ban dau: %s\n", chuoi);
    printf("Chuoi dao nguoc: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", chuoi[i]);
    }
    printf("\n");
}