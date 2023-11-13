# Custom Data Types in C

## Structures

In the C programming language, structures provide a means to create user-defined data types, allowing you to group different types of data under a single name. Each piece of data within a structure is referred to as a member or field. Structures are instrumental in organizing related information in a meaningful way.

### Example:

```c
#include <stdio.h>

// Define a structure named 'Person'
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare a variable of type 'struct Person'
    struct Person person1;

    // Access and modify members of the structure
    strcpy(person1.name, "John Doe");
    person1.age = 25;
    person1.height = 175.5;

    // Display information
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    return 0;
}

