#include <stdio.h>

int main() {
    int arr[6][4] = {
        {1, 2, 3, 4},     
        {5, 6, 7, 8},     
        {9, 10, 11, 12},  
        {13, 14, 15, 16}, 
        {17, 18, 19, 20}, 
        {21, 22, 23, 24}  
    };    
    printf("=== 2D Array Traversal ===\n");
    printf("Array dimensions: 6 rows × 4 columns\n");
    printf("Total elements: %d\n\n", 6 * 4);
    printf("Method 1: Row-by-row traversal\n");
    printf("--------------------------------\n");
    for(int row = 0; row < 6; row++) {
        printf("Row %d: ", row);
        for(int col = 0; col < 4; col++) {
            printf("%3d ", arr[row][col]);
        }
        printf("\n");
    }
    printf("\n\nMethod 2: Detailed view with indices\n");
    printf("----------------------------------------\n");
    for(int row = 0; row < 6; row++) {
        for(int col = 0; col < 4; col++) {
            printf("arr[%d][%d] = %2d  ", row, col, arr[row][col]);
        }
        printf("\n");
    }
    printf("\n\nMethod 3: Column-by-column traversal\n");
    printf("---------------------------------------\n");
    for(int col = 0; col < 4; col++) {
        printf("Column %d: ", col);
        for(int row = 0; row < 6; row++) {
            printf("%3d ", arr[row][col]);
        }
        printf("\n");
    }
    printf("\n\nMethod 4: Matrix format\n");
    printf("-------------------------\n");
    printf("        Col0 Col1 Col2 Col3\n");
    printf("        --------------------\n");
    for(int row = 0; row < 6; row++) {
        printf("Row %2d: ", row);
        for(int col = 0; col < 4; col++) {
            printf("%4d", arr[row][col]);
        }
        printf("\n");
    }
    printf("\n\nMethod 5: With calculations\n");
    printf("-----------------------------\n");
    printf("Row sums:\n");
    for(int row = 0; row < 6; row++) {
        int rowSum = 0;
        for(int col = 0; col < 4; col++) {
            rowSum += arr[row][col];
        }
        printf("  Row %d sum = %d\n", row, rowSum);
    }
    printf("\nColumn sums:\n");
    for(int col = 0; col < 4; col++) {
        int colSum = 0;
        for(int row = 0; row < 6; row++) {
            colSum += arr[row][col];
        }
        printf("  Column %d sum = %d\n", col, colSum);
    }
    
    return 0;
}