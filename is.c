
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
int check_integer(const char* s) {
    int r = 0;
    while (*s) {
        if (isdigit(*s)) {
            r = r * 10 + (*s - '0');
        } else {
            r = 0;
            break;
        }
        s++;
    }
    return r;
}
 
int input_integer() {
    char s[100];
    int r;
    while (1) {
        scanf("%s", s);
        r = check_integer(s);
        if (r > 0) return r;
    }
}
 
int main()
{
    printf("%d\n", input_integer());
    return 0;
}
