#include <stdio.h>

void incrementByValue(int num) {
    num = num + 1; 
    printf("Inside incrementByValue: num = %d\n", num);}
 
void incrementByReference(int num) {  
    num = num + 1;
    printf("Inside incrementByReference: num = %d\n", num);
     }

int main() {
    int number = 10;
    
    printf("Starting number: %d\n\n", number);
    
    incrementByValue(number);
    printf("After incrementByValue: %d\n\n", number);    
   
    incrementByReference(number); 
    printf("After incrementByReference: %d\n", number);
    
    return 0;
}
