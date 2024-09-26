#include<stdio.h>
#include<stdlib.h>
#include"myutils.h"

int main() {
    int a, b, c, d;
    a = 10;
    b = 20;
    
    int e; // Uninitialized variable
    int unused_var = 100; // Unused variable
    
    c = sum(a, b);
    d = square(a);
    
    int *ptr = malloc(100); // Allocate memory but don't free it to cause a valgrind error

    printf("c=%d, d=%d\n", c, d);
    
    // Uncomment to cause an uninitialized memory use error (valgrind will catch it):
    // printf("e=%d\n", e);
    
    // Forgetting to free(ptr); would cause a memory leak error (caught by valgrind)
    
    return 0;
}
