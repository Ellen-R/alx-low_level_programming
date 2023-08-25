#include <stdio.h>

int main() {
    char *p;
    char a[] = "abc";
    
    p = a;
    *p = 'd';
    *(p + 2) = 'e';
    
    *(*(p + 2) + 1) = 'b'; // Added line
    
    printf("a[2] = %d\n", a[2]);
    
    return 0;
}
