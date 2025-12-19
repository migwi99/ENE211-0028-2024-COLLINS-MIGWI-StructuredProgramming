EEC 2202: STRUCTURED PROGRAMMING
Assignment 3: Variables, Pointers & Functions
Name: Collins Migwi
REG NO: ENE211-0028/2024

1.Explain the difference between a normal variable and a pointer. Your answer should clearly mention: what each one stores, how memory is accessed, how values are read
and modified.

A normal variable directly stores a value such as intgers and float.Memory is accessed using the variable’s own address often the name refers to the data stored. to read the values you get them directly by the variable name and to modify them you assign a new value to the variable
A pointer variable stores a memory address not a direct value.The pointer itself has its own address, but its value is another address. To access the data at that address, you must dereference the pointer.Pointers store memory addresses. To read the address they store, use the pointer name. To read the actual data they point to, dereference them with. To change what the pointer points to, assign a new address directly to the pointer.

2.Using suitable examples, explain how variable declaration and definition differs from pointer declaration and definition. Clearly highlight the role of the operators * and &

Declaring a variable tells the compiler its type exists defining it allocates memory and optionally gives it a value. For normal variables, declaration and definition often happen together. eg 
    int x = 90;
Declaring a pointer tells the compiler we'll have a variable that stores an address. Defining it allocates memory for the pointer itself, not for the data it will point to.
    int *ptr;
    int val = 50;
    ptr = &val;

3.Explain the meaning of deferencing a pointer. Using a simple show how a pointer accesses the value stored at a memory address, and demonstrate how a value can be modified using deferencing.

Dereferencing a pointer means accessing the actual data stored at the memory address the pointer holds, rather than just getting the address itself.

    int main() {
        int number = 42;        
        int *ptr = &number;     
        
        printf("Pointer stores address: %p\n", ptr);
        
        printf("Value at that address: %d\n", *ptr);
        
        *ptr = 99;               
        printf("New value: %d\n", number);  
        }

Describe scenarios or use cases where pointers are preferred over normal variables.
Support your answer with at least two practical examples.

Pointers are preferred over normal variables when you need indirect access, dynamic memory, or to avoid copying large data.
        void swap(int *a, int *b) {
            int temp = *a;
            *a = *b;
            *b = temp;
        }

        int main() {
            int x = 5, y = 10;
            swap(&x, &y);  // x becomes 10, y becomes 5
            return 0;
        }

        int main() {
            int n;
            printf("How many numbers? ");
            scanf("%d", &n);
            
            int *arr = malloc(n * sizeof(int));
            
            for(int i = 0; i < n; i++) {
                arr[i] = i * 10;
            }
            
            free(arr);
            return 0;
        } 

Explain the limitations and risks associated with using pointers compared to variables.

Pointers can point to invalid or freed memory leading to crashes, lead to memory leaks if not properly freed and allow out-of-bounds access via pointer arithmetic. Unlike normal variables, pointers require careful initialization and lifecycle management to avoid undefined behavior or security vulnerabilities.

Using suitable examples compare call by value and call by reference. Explain how data
is passed to functions in each case.

Call by value passes a copy of the variable's value. The function works with the copy, leaving the original unchanged.

    void increment(int x) {
        x = x + 1; - Modifies only the copy
    }

    int main() {
        int num = 5;
        increment(num);  - Passes copy of num's value
        printf("%d", num);  - Still 5
    }

Call by reference passes the variable's address (using a pointer), so the function can modify the original.

    void increment(int *x) {
        *x = *x + 1;  // Modifies the original variable
    }

    int main() {
        int num = 5;
        increment(&num);  // Passes address of num
        printf("%d", num);  // Now 6
    }

Discuss practical scenarios where:
a. Call by value is preferred

When you want to protect original data.
With small, simple data types. 
When you need the original unchanged for later use.

b. Call by reference is preferred 
When modifying the original is required
With large data structures
When you need multiple return values
For dynamic data structures



