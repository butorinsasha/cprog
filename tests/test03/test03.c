#include <stdio.h>

int k, **n = &&k;           // not compiled
int k; int **n = &(&k);     // not compiled
int k; int **n = (int**)&k; // compiled
int *k; int **n = &k;       // compiled
int *k; int **n = &*&k;     // compiled

int main()
{
    /* code */
    return 0;
}
