#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;
    ptr = &num;
    
    printf("1. Value of num:                    %d\n", num);
    printf("2. Value stored in ptr (address):   %p\n", (void*)ptr);
    printf("3. Address of num (&num):           %p\n", (void*)&num);
    printf("4. Value accessed using *ptr:       %d\n", *ptr);
    
    return 0;
}
