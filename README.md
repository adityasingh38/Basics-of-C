
# Basics of C

C is a powerful programming language with a relatively simple syntax. It is widely used in the development of operating systems, embedded systems, and scientific applications. While it can be challenging to learn initially, mastering C can lead to a career in programming or software development.


## Key Points
Here are some important points:

•	Data Types: C has a variety of data types including int, float, double, char, and others. These data types are used to define variables, constants, and other objects in a C program.

•	Control Structures: Control structures in C are used to control the flow of a program. These include if-else statements, loops, switch statements, and others.

•	Functions: Functions in C are used to perform specific tasks. A function consists of a set of statements that are executed when the function is called. C also allows the creation of user-defined functions.

•	Arrays: Arrays in C are used to store a collection of data items of the same type. The elements in an array are accessed using an index value.

•	Pointers: Pointers are variables that store the memory address of another variable. They are widely used in C programming to pass values between functions, and to create dynamic data structures like linked lists and trees.

•	Structures: Structures are used to group related data items of different data types. They are used to create complex data structures in C programs.

•	File Input/Output: C provides a set of functions for file input/output operations. These functions are used to read and write data from/to files on disk.

•	Preprocessor Directives: Preprocessor directives in C are used to modify the source code before compilation. These include #define, #include, #ifdef, and others.






## Data Types In C
C supports several basic data types, which are:

1. Integers - used for storing whole numbers without decimal points. There are several types of integers in C, including:
- int: a signed integer, range: -2,147,483,648 to 2,147,483,647.
- short: a signed integer, range: -32,768 to 32,767.
- long: a signed integer, range: -2,147,483,648 to 2,147,483,647.
- unsigned int, unsigned short, unsigned long: unsigned integers that can hold only non-negative values.

Examples 
```
int x = 5;
short y = 3;
```
2. Floating-point numbers - used for storing numbers with decimal points. There are two types of floating-point numbers in C:
- float: a single-precision floating-point number that can hold up to 6 decimal places.
- double: a double-precision floating-point number that can hold up to 15 decimal places.

Examples
```
float f = 78.33;
double d = 908.789;
```
3. Characters - used for storing individual characters. The char data type can store a single character, such as a letter or a symbol.

Examples
```
char c = 'a';
char g = '.';
```
4. Boolean - used for storing true/false values. In C, boolean values are represented as integers, with 0 indicating false and any non-zero value indicating true.

5. Void - used to indicate that a function does not return a value, or that a pointer does not point to any specific data type.

6. Enumerated types - used for creating user-defined data types that can only take on certain values.

7. Arrays - used for storing multiple values of the same data type.

Examples
```
int arr[4] = {10, 20, 30, 40};
char ch_arr[7] = {'f', 'a', 'y', 't', 'w', 'n', 'o'};
```


# Code

```bash
#include <stdio.h>

int main()
{
  int x;
  float f;
  char ch;
   
  printf("Enter any Integer: ");
  scanf("%d", &x);
  printf("\n");
  
  printf("Enter any Floating Point: ");
  scanf("%f", &f);
  printf("\n");
  
  printf("Enter any Character: ");
  scanf("%c", &ch);
  printf("\n");
  
  printf("Integer: %d\nFloat: %f\n  Character: %c\n", x, f, ch);
    
  return 0;
}
```
## Output
![Screenshot 2023-04-26 025207](https://user-images.githubusercontent.com/88421625/234407107-f300c5a5-7d7b-417c-a2d2-be4c86078343.png)
