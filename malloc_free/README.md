# Dynamic Memory Allocation with `malloc` and Memory Deallocation with `free`

## Introduction

This code example illustrates how to use `malloc` and `free` in the C programming language for dynamic memory allocation and deallocation. Dynamic memory management is a crucial aspect of C programming, allowing you to allocate memory at runtime and free it when no longer needed.

## Code Overview

The code provided (`malloc_and_free_example.c`) demonstrates the following key concepts:

1. **Dynamic Memory Allocation**: It allocates memory dynamically for an integer array using the `malloc` function. The allocated memory can hold a user-defined number of integers.

2. **Memory Deallocation**: After using the allocated memory, it deallocates the memory using the `free` function to prevent memory leaks.

3. **Error Handling**: The code includes error handling to check if memory allocation with `malloc` was successful. If allocation fails (e.g., due to insufficient memory), an error message is displayed.

4. **Best Practices**: The code follows best practices, including setting the pointer to `NULL` after freeing the memory to prevent accidental access to the freed memory.

## Code Usage

To compile and run the code:

1. Save the code to a file, e.g., `malloc_and_free_example.c`.
2. Open your terminal or command prompt.
3. Compile the code using a C compiler like GCC:


4. Run the compiled program:


## Example Output

Upon running the code, you should see output similar to the following:


## Conclusion

The code example provided demonstrates the correct usage of `malloc` and `free` for dynamic memory allocation and deallocation in C. It follows best practices for memory management, ensuring that allocated memory is properly freed to avoid memory leaks.

Feel free to examine the code (`malloc_and_free_example.c`) for a more detailed understanding of how `malloc` and `free` are used in practice.

