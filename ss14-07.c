#include <stdio.h>

int main() {
    char str[] = "Hello my gmail is test123@gmail.com";   
    int chu_cai = 0; 
    int chu_so = 0;   
    int dac_biet = 0;   
    for (int i = 0; str[i] != '\0'; i++) {
        if (chu(str[i])) {
            chu_cai++;  
        }
        else if (so(str[i])) {
            chu_so++;  
        }
        else if (!space(str[i])) {
            dac_biet++;  
        }
    }
    printf("So ky tu la chu cai: %d\n", chu_cai);
    printf("So ky tu la chu so: %d\n", chu_so);
    printf("So ky tu dac biet: %d\n", dac_biet);

    return 0;
}
