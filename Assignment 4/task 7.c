#include <stdio.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int head = 0;    
int tail = 0;    
int count = 0;   
void insert_sample(int value) {
    buffer[tail] = value;
    tail = (tail + 1) % BUFFER_SIZE;
    if (count < BUFFER_SIZE) {
        count++;
    } else {
        head = (head + 1) % BUFFER_SIZE;
    }
    
    printf("Inserted: %d\n", value);
}

void print_samples() {
    if (count == 0) {
        printf("Buffer is empty\n");
        return;
    }
    
    printf("Stored samples (oldest -> newest): ");
    for (int i = 0; i < count; i++) {
        int index = (head + i) % BUFFER_SIZE;
        printf("%d ", buffer[index]);
    }
    printf("\n");
}
int main() {
    int value;
    char choice;
    
    printf("=== Circular Data Logger ===\n");
    printf("Buffer size: %d\n", BUFFER_SIZE);
    printf("When buffer is full, new data overwrites oldest.\n\n");
  
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert new sample\n");
        printf("2. Display all samples\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf(" %c", &choice);
        
        switch (choice) {
            case '1':
                printf("Enter sensor value: ");
                scanf("%d", &value);
                insert_sample(value);
                break;
                
            case '2':
                print_samples();
                break;
                
            case '3':
                printf("Exiting...\n");
                return 0;
                
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    
    return 0;
}