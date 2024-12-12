#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    printf("Nhap mot chuoi bat ky: ");
    scanf("%99[^\n]", input);
    printf("Chuoi vua nhap: %s\n", input);
    printf("Do dai chuoi: %lu\n", strlen(input));
}