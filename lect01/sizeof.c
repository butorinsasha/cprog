#include <stdio.h>
#include <stdbool.h>

int main() {   
    double d = 2.7;
    float f = 3.14;
    int i = 17;
    int bi = 1 && 3;
    char c = 'A';
    bool b = 0; // _Bool
    printf("sizeof(d=%f)=%ld\n", d, sizeof(d));     // sizeof(d=2.700000)=8
    printf("sizeof(f=%f)=%ld\n", f, sizeof(f));     // sizeof(f=3.140000)=4
    printf("sizeof(i=%i)=%ld\n", i, sizeof(i));     // sizeof(i=17)=4
    printf("sizeof(bi=%d)=%ld\n", bi, sizeof(bi));  // sizeof(bi=1)=4
    printf("sizeof(c=\'%c\')=%ld\n", c, sizeof(c)); // sizeof(c='A')=1
    printf("sizeof(b=%d)=%ld\n", b, sizeof(b));     // sizeof(b=0)=1
    return 0;
}