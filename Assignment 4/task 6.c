#include <stdio.h>

int main() {
    int n;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int arr[n + 1];  
    
    printf("Input %d elements in the array:\n", n);
    for(int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("\nThe current list of the array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    int value, position;
    printf("Input the value to be inserted: ");
    scanf("%d", &value);
    printf("Input the Position, where the value to be inserted: ");
    scanf("%d", &position);
    
    if(position < 0 || position > n) {
        printf("Invalid position! Must be between 0 and %d\n", n);
        return 1;
    }
    
    for(int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[position] = value;
    
    printf("After Insert the element the new list is: ");
    for(int i = 0; i <= n; i++) {  
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}