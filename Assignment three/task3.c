#include <stdio.h>

int main() {    
    int count = 10;        
    int *pCount;           
    pCount = &count;       
    
    printf("First, count = %d\n\n", count);
    *pCount = 25;
    printf("Changed count to %d using pointer\n", count);
    
    *pCount = *pCount + 5;
    printf("Added 5, now count = %d\n", count);
    printf("\nFinal count value: %d\n", count);
    
    return 0;
}
