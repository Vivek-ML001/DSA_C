// lets make a structure and use it
#include <stdio.h>
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student student1;

    // Assigning values to student1
    student1.id = 1;
    snprintf(student1.name, sizeof(student1.name), "Alice");
    student1.marks = 95.5;

    // Printing student1 details
    printf("Student ID: %d\n", student1.id);
    printf("Student Name: %s\n", student1.name);
    printf("Student Marks: %.2f\n", student1.marks);

    // another name student2
    struct Student student2;
    student2.id = 2;
    snprintf(student2.name, sizeof(student2.name), "Bob");
    student2.marks = 88.0;
    printf("Student ID: %d\n", student2.id);
    printf("Student Name: %s\n", student2.name);
    printf("Student Marks: %.2f\n", student2.marks);



    return 0;
}


// we can make array of structure also 
// structure as a function argument
// structure as a function return type
// nested structure
// array of structure
// pointer to structure
// self-referential structure
