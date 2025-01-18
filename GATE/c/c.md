# C Programming

<!--toc:start-->
- [C Programming](#c-programming)
  - [Data Type](#data-type)
  - [Expression vs Statement](#expression-vs-statement)
    - [Statement](#statement)
  - [Modifier Operations(x++, ++x, x--, --x)](#modifier-operationsx-x-x-x)
  - [Bitwise Operations](#bitwise-operations)
  - [Ternary Operation (?:)](#ternary-operation)
  - [`sizeof` Operator](#sizeof-operator)
- [Loops](#loops)
  - [Switch](#switch)
  - [For](#for)
  - [While](#while)
  - [Do-while](#do-while)
  - [Break Statement](#break-statement)
  - [Continue Statement](#continue-statement)
- [Storage Class & Function](#storage-class-function)
  - [Storage Class types:](#storage-class-types)
  - [Lifetime and Storage](#lifetime-and-storage)
  - [Static & Dynamic Scoping](#static-dynamic-scoping)
    - [Static Scoping](#static-scoping)
    - [Dynamic Scoping](#dynamic-scoping)
- [Arrays and Pointer](#arrays-and-pointer)
  - [Array](#array)
    - [Advantage](#advantage)
    - [Disadvantage](#disadvantage)
    - [2D Array](#2d-array)
  - [Pointers](#pointers)
<!--toc:end-->

## Data Type
- Primitive Types:
    - short, int, long, long long
    - char, unsigned char
    - float, double, long double
- Non-primitive Types:
    a - Derived
        - Array
        - Pointer
        - String
    b - User
        - Structure
        - union
        - enum
        - typedef
-> Only minimum size is defined by C Standard, actual size is defined by compiler

## Expression vs Statement
- c program is a collection of statements
- `int a` is a declaration statement
- `a = 10` is an assignment statement
- Expression is a statement with some value (e.g: `10 + 30`)

### Statement
- Result of assignment statement is the value we are assigning:
    ```
    int x;
    x = 3 + (x = 10);
    ```
    - x is evaluated as 10
    - result of `x = 10` is 10
    - and `x = 3 + (x = 10)` => `x = 3 + 10`
    - finally, `x = 13`

## Modifier Operations(x++, ++x, x--, --x)
- Pre conditions (++/-- x) are incremented/decremented and then used
- Ex: `int x = 2; printf("%d\n", ++x)` prints 3
- Post conditions (x ++/--) are used and then modified
- Ex: `int x = 2; printf("%d\n", x++)` prints 2 but x will be incremented for next operation

## Bitwise Operations
- Works on corresponding binary values
- Similar to logical operations, these are performed on bits
- Operations:
    - AND &
    - OR |
    - XOR ^ (if both bits are same result is 0, and 1 if both are different)
    - NOT ~
    - Right Shift >>
    - Left Shift <<

## Ternary Operation (?:)
- Called ternary because need 3 expressions
- (expression) ? (if_true) : (if_false)
- Pairs with nearest partner, from right to left
- Number of '?' and ':' should be equal
- Every colon ':' should match with just before '?'
- Ex:
    ```
    int a;
    a = 2>5 ? 10 : !5! =2>5 ? 20 : 30
    (2 > 5) is left
    (10) is middle
    (!5! =2>5 ? 20 : 30) is right
    as left is false, a = right
    !5 = 0
    2>5 = 0
    0!=0 = 0
    so, a = 30
    ```

## `sizeof` Operator
- Compile time unary operator, i.e result is determined at compile time
- Compiles the size of operand(-variable, -expression, -literal, -data_type)
- Result is unsigned int
- Ex: 
```
int a = 2, b;
double d = 10.21;
b = sizeof(a);
printf("%d %d %lu", ++a, b, sizeof(a+d));
// "3 4 8"
// size of int = 4, double = 8
```

# Loops

## Switch
- Case label can be a char type or int type
- Case label cannot be variable
- No duplicates allowed
- Position of default case does not matter
- Default case is optional

## For
- Recommended to use if number of iterations are known
- Executes 3 expressions and executes loop body until second controlling expression executes to false

## While
- Check the expression and loop until the expression is false

## Do-while
- Same a while
- Executes atleast once
- Perform first and check expression later

## Break Statement
- Used to early exit the current loop

## Continue Statement
- Used to skip current iteration and continue on next iteration

# Storage Class & Function

## Storage Class types:
        - Auto
            - Local Variable
            - Register
        - Static
            - Static Variable
            - External/Global Variable

- Code Segment: The code to be executed/high level code
- Uninitialized Data segment: Uninitialized Static/Global variables
- Initialized Data segment: Initialized Static/Global variables
- Stack: Local variables and some other information
- Heap: Responsible to dynamic memory allocation
- Static memory

## Lifetime and Storage
| Storage Class | Scope | Lifetime | Default | Storage |
|---|---|---|---|---|
| auto  | local  | within fun  | garbage  | stack  |
| static  | local  | till end  | 0  | ram/data segment  |
| extern  | global  | till end  | 0  | ram/data segment  |
| register  | local  | within fun  | garbage  | register/stack  |

## Static & Dynamic Scoping

### Static Scoping
- Lexical Scoping
- Scoping of variable can be detemined from program text
- Checks the current scope, then the parent scope and so on until global scope

### Dynamic Scoping
- Compiler checks the current scope, then the function's scope which called the current function and so on till `main`

# Arrays and Pointer

## Array
```
(data_type) (name)[size];
int marks[21];
int marks[5] { 12, 31, 46, 21, 12 };
int marks[] { 12, 31, 46, 21, 12 }; // Only allowed if all items are defined
```

- Collection of similar type of data items
- Stored at contigous memory locations
- Capability to store primitive, pointers, structures, etc.
- Can be randomly accessed using [index]
- Name of array is the address of its first element
- Modifiers are not valid
- Name cannot be reassigned
- `a[2]===*(a + 2)===*(2 + a)===2[a]` are same after declaration

### Advantage
- Less code to access
- Ease of sorting
- Ease of traversing
- Random Access
- Cache friendliness, improves performance

### Disadvantage
- Fixed size

### 2D Array
```
int hi[2][3];
```
- Array of arrays
- Organised as matrix

During declaration size is required:
```
int mark[5]; //valid
int mark[];  //invalid
```
During initialization size of **First dimension is optional**:
```
int marker[][3] = { 2, 3, 1, 4 }; //valid
int marker[3][] = { 2, 3, 1, 4 }; //invalid
```

## Pointers

**When doing `int *p = 2;` `*p` is the actual integer and p is the location of `value` in memory address

1. Dangling Pointer: _The pointer pointing to a deallocated memory block is known as dangling pointer_

2. Uninitialized/Wild Pointer: _A uninitialized pointer_
Ex:
```
int *p;
*p => points at garbage
```

3. Null Pointer: _A pointer pointing at nothing. Used to distinguish between a valid and invalid pointer_

4. void Pointer: _A pointer which points to some location in memory but that has no specific type_
Ex:
```
void *p;
int x = 10;
p = &x;
printf("%d", *p); // invalid
printf("%d", *(int*)p); // valid (typecasted)
```

## Strings
- Sequence of characters terminated by a null character '\0'

**NOTE: In case of string `printf` takes a pointer and keeps printing till null char is not reached

### Two methods of initialization:
 ```
 char name[10] = "Pankaj";
 ```
1. A array of size 10 is allocated
2. Array is populated: { P, a, n, k, a, j, \0, , , , , , } (size 10)
3. This is allocated to a read/write-able part,i.e. can be modified using `name[2] = "2"` or `strcpy(name, "raju")` but **not** with `name = "ramu"`

```
char *name = "Pankaj";
```
1. Address of first char is saved to name
2. Memory is populated: { P, a, n, k, a, j, \0 } (size fixed)
3. Allocated to read/only, i.e. can be modified only with `name = "Mohit"`. This will update the pointer

```
printf("Hello") // Hello, as "Hello" is just the address of 'H'
printf("Hello" + 1) // ello, as "Hello" + 1 is the address of 'e'
```

### Important functions
- strlen(): returns length of string
- strcpy(a, b): copies string `b` to array `a`
- strcmp(): compares two strings and returns `0` if true
- strcat(a, b): concatenate two strings, will be stored in `a`

# Questions

`int(*(*f[5]))()[9];` => f is an array of 5 pointer to function returning pointer to array of 9 integers.









