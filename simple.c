#include<stdio.h>
#include<stdlib.h>
#include"myutils.h"

int main() {
    int a, b, c, d;
    a = 10;
    b = 20;
    
    int unused_var = 100; // Unused variable
    int e; // Uninitialized variable
    
    c = sum(a, b);
    d = square(a);
    
    printf("c=%d, d=%d\n", c, d);
    
    // Uncommenting this line will trigger the uninitialized variable error
     //printf("e=%d\n", e);
    
    return 0;
}
