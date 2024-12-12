#include <stdio.h>
#include <string.h>

int main() {
    char str[];  
    printf("Hay nhap mot chuoi: ");
    fgets(str, sizeof(str), stdin); 
    printf("Chuoi vua nhap la: %s", str);
    printf("Do dai cua chuoi la: %d\n", strlen(str) - 1); 

    return 0;
}
