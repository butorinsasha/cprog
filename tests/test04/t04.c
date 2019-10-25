#include <stdio.h>

int main(){
    printf("Hello, World!\n");
    printf("\n");
    // double d1, d2;
    // scanf("%d %d", &d1, &d2);
    // printf("%d\n%d\n", d1, d2);

    char str1[] = "ping";
    printf("char str1[] = \"ping\"\n");

    printf("sizeof(str1) = %ld\n", sizeof(str1));
    for (int i; i < sizeof(str1); i++) {
        printf("str1[%d] = %c = 0x%02x\n", i,str1[i], str1[i]);
    }

    str1[1] = 'o';
    printf("\n");
    printf("str1[1] = 'o' = 0x%02x\n", 'o');

    for (int i; i < sizeof(str1); i++) {
        printf("str1[%d] = %c = 0x%02x\n", i, str1[i], str1[i]);
    }


    printf("\n\n");


    char *str2 = "ping";
    printf("char *str2 = \"ping\"\n");

    printf("sizeof(str2) = %ld\n", sizeof(str2));
    for (int i; i < sizeof(str2); i++) {
        printf("str2[%d] = %c = 0x%02x\n", i, str2[i], str2[i]);
    }

    str2[1] = 'o'; 
    // Windows: 1 [main] t04 39 cygwin_exception::open_stackdumpfile: Dumping stack trace to t04.exe.stackdump
    // Linux: Segmentation fault (core dumped)
    
    // printf("str2[1] = 'o' = 0x%02x\n", 'o');
    // for (int i; i < sizeof(str2); i++) {
    //     printf("str2[%d] = %c = 0x%02x\n", i, str2[i], str2[i]);
    // }
   

    return 0;
}
