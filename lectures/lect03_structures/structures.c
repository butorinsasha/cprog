#include <stdio.h>

int arr[3] = {0, 3, 7};
int len = sizeof(arr)/sizeof(arr[0]);

typedef struct {
    char c; // 1 Bite
    int i;  // 4 Bite
} S;

S s = {'A', 1};

main()
{
    for (int i = 0; i < len; ++i)
       {
            printf("%d\n", arr[i]);        
       }

    printf("Size of S: %ld\n", sizeof(S) ); // 8 // gcc -fpack-struct=11>> 5; // OR #pragma pack(push, 1) #pragma pack(pop)
    printf("Size of int: %ld\n", sizeof(int) );
    printf("s.c = %c\n", s.c);
    printf("s.i = %d\n", s.i);
}