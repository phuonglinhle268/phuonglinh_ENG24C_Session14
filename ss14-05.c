#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello world";
    int count = 1;  
    int i;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            count++;
        }
    }
    printf("So tu trong chuoi la: %d\n", count);

    return 0;
}
