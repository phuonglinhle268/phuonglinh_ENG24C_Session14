#include <stdio.h>

int main() {
    char str[] = "hello world";
    int i = 0;
    if (str[i] != '\0' && chu(str[i])) {
        str[i] = inHoa(str[i]);
    }
    for (i = 1; str[i] != '\0'; i++) {
        if (space(str[i - 1]) && chu(str[i])) {
            str[i] = inHoa(str[i]);
        }
    }
    printf("%s\n", str);

    return 0;
}
