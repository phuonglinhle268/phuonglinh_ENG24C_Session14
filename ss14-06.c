#include <stdio.h>

int main() {
    
    char str[] = "Hello world";  
    int count = 0;  
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (alpha(str[i])) {
            count++;
        }
    }
    printf("So chu cai co trong chuoi la: %d\n", count);

    return 0;
}
