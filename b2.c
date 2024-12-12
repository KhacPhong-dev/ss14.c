#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Hello World";
    printf("Cac ky tu trong chuoi: ");
    for (int i = 0; i < strlen(chuoi); i++) {
        printf("%c ", chuoi[i]);
    }
    printf("\n");
}