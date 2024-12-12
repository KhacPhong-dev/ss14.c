#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "hello world";
    int count = 0;
    int sotu = 0;
    printf("Chuoi da khai bao: %s\n", chuoi);
    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == ' ') {
            sotu = 0;
        } else if (sotu == 0) {
            sotu = 1;
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}