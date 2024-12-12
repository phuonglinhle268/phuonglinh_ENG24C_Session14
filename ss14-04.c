#include <stdio.h>

int main() {
    char str[] = "Hello world";
    char word;
    int count = 0;
    printf("Nhap ki tu can tim: ");
    scanf("%c", &word);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == word) {
            count++;
        }
    }
    printf("Ki tu '%c' xuat hien %d lan trong chuoi.\n", word, count);

    return 0;
}
