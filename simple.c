#include<stdio.h>
#include<stdlib.h>
#include"myutils.h"

int main() {
    int a, b, c, d;
    a = 10;
    b = 20;
    
    c = sum(a, b);
    d = square(a);
    
    // Memory allocation without freeing (memory leak)
    int *ptr = (int *)malloc(100 * sizeof(int));
    
    // Using uninitialized memory (valgrind will catch this)
    int uninitialized_var;
    //printf("uninitialized_var=%d\n", uninitialized_var);  // Error: Variable used uninitialized
    
    printf("c=%d, d=%d\n", c, d);
    
    // Memory leak: Forgot to free(ptr)
    
    return 0;
}
