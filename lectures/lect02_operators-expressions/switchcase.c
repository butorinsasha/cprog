#include <stdio.h>

int main() {
    int a = '2';
    char ch = 'b';
    switch (ch) {
        case 'a':
            printf("a\n");
            break;
        case 'b':
            printf("b\n");
        case 'c':
            printf("c\n");
            break;
        case 'd':
            printf("d\n");
            break;
        default:
            printf("default\n");
    }
    return 0;
}