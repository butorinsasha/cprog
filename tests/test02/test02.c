#include <stdio.h>

// int short arr[20];
// short arr[10 << 1]
// short int arr[10 * (10 % -3)];
// arr[40] short;
short arr[20];
struct S {
    char c; // 1 Bite
    int i;  // 4 Bite
};

struct S s;


// s.c = 'B'; // WRONG!
// s.i = '2'; // WRONG!

struct S ss = {'A', 1};

void main()
{
    // s = {'A', 1}; // WORNG

    s.c = 'B';
    s.i = '2';
    
    printf("size of short arr[0] = %ld\n", sizeof(arr[0]));
    printf("numb of elem of short arr = %ld\n", sizeof(arr) / sizeof(arr[0]));
    printf("sizeof(short arr) = %ld\n", sizeof(arr));
    printf("address of s = %p\n", &s);
    printf("address of s.i = %p\n", &s.i);
}
