#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Hello World! 123";
    int count = 0;
    for (int i = 0; i < strlen(chuoi); i++) {
        if ((chuoi[i] >= 'A' && chuoi[i] <= 'Z') || (chuoi[i] >= 'a' && chuoi[i] <= 'z')) {
            count++;
        }
    }
    printf("%d\n", count);
}