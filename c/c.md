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

