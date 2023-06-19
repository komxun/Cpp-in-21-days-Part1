# C++ in 21 days Part 1
My note for learning C++ in 21 days (Day 1 - 5)

Reference: Liberty, J., & Jones, B. L. (2004). _Sams teach yourself C++ in 21 days_. Sams Publishing.
> Created by Komsun Tamanakijprasart


Table of contents
=================

<!--ts-->
  * [About C++](#about-c)
      * [The Process of Creating the Program](#the-process-of-creating-the-program)
      * [The Anatomy of a C++ Program](#the-anatomy-of-a-c-program)
  * [Using the Standard Namespace](#using-the-standard-namespace)
  * [Variables and Constants](#variables-and-constants)
      * [Assigning Values to Variables](#assigning-values-to-variables)
      * [Creaing Aliases with type definition (typedef)](#creating-aliases-with-type-definition-typedef)
      * [Constants](#constants)
  * [Enumerated Constant](#enumerated-constant)
  * [Self-assigned operators | Incrementing and Decrementing](#self-assigned-operators--incrementing-and-decrementing)
  * [Prefix and Postfix Operators](#prefix-and-postfix-operators)
  * [if Statement](#if-statement)
  * [Logical Operators](#logical-operators)
      * [Short Circuit Evaluation](#short-circuit-evaluation)
  * [The Conditional (Ternary) (?:) Operator](#the-conditional-ternary--operator)
  * [Functions](#functions)
      * [Function Prototype](#function-prototype)
      * [Defining the Function](#defining-the-function)
      * [Default Parameters](#default-parameters)
      * [Overloading Functions (Function Polymorphism)](#overloading-functions-function-polymorphism)
  * [Inline Functions](#inline-functions)
      * [Recursion](#recursion)
     
<!--te-->


# About C++
C++ is a compiled languages, meaning you can distribute the executable program (.exe) to people who don’t have the compiler. C++ fully supports object-oriented programming (OOP), including encapsulation, inheritance, and polymorphism.

Encapsulation is the property of being a self-contained unit. You can accomplish data hiding with encapsulation. Changes can be made to workings of program without affecting the operation of the program. With inheritance, you can declare a new type that is an extension of an existing type and add additional capabilities. The program may respond differently than the original one but a user does not have to know about these differences. This is Polymorphism, the same name taking many forms.

## The Process of Creating the Program
1.	Create a source code file with a `.cpp` extension
2.	Compile the source code to create an object file (`.obj` or `.o` extension) with the Compiler
3.	Link the object file with any needed libraries to produce an executable program (`.exe`)

## The Anatomy of a C++ Program
- The `#` symbol signals the preprocessor 
- `#include` is a preprocessor instruction meaning that “What follows is a file-name. Find that file, read it, and place it right here”
- `iostream` is a file in the directory that holds all the include files for your compiler
- `main()` is a special function that’s called automatically when your program starts. Every C++ program has a `main()` function
- For best practice, `main()` should be specified to return integer value 0

# Using the Standard Namespace
- Declare to use the standard namespace (`std`)
- `std::endl`  is used to enter a new line to the console
- `std::endl` is preferable to the use of `\n` because endl is adapted to the operating system in use. 

https://github.com/komxun/Cpp-in-21-days-Part1/blob/068273d47c433c7fa56719e12f97d39bdf59fbfb/Day%202%20-%20Anatomy%20of%20C%2B%2B%20program/using_using.cpp#L1-L23

# Variables and Constants
- You must tell the compiler what type of variable it is: integer, floating-point number, character, etc.
- signed integers can be negative or positive. unsigned integers are always positive
- You define a variable by stating its type, followed by spaces, followed by the variable name and a semicolon
- C++ is case sensitive, meaning uppercase and lowercase letters are different!

![image](https://github.com/komxun/Cpp-in-21-days-Part1/assets/133139057/c46ff1c7-5457-476a-b2a5-0821f88ac91c)

## Assigning Values to Variables
- You can initialize more than one variable at creation with mix definitions and initializations:
```c++
int myAge = 39, yourAge, hisAge = 40;
```

## Creating Aliases with type definition (typedef)
- `typedef` is used to create a synonym of the phrase (not creating a new type)
```c++
typedef unsigned short int USHORT

int main()
{
  USHORT Width = 5;
  USHORT Length;
  Length = 10;
  return 0;
}
```
## Constants
- When a constant is initialized, you cannot assign a new value later!
- C++ has two types of constants: literal and symbolic
- A literal constant is a value typed directly into your program (the number is a constant)
- A symbolic constant is a constant that is represented by a name
- Symbolic constant can be declared with 1) `#define` (NOT recommended), or 2) `const`

```c++
// Literal constant
int myAge = 39; // 39 is a literal constant

// Symbolic constant
const unsigned short int numObj = 15; // numObj is a symbolic constant
```

# Enumerated Constant
- Enumerated constants enable you to create **new types** and then define variables of those types whose values are restricted to a set of possible values
- Enumerated constants have the advantages of being self-documenting
```c++
enum COLOR {RED, BLUE, GREEN, WHITE, BLACK};
```
The above example performs two tasks:
1. It makes COLOR the name of an enumeration; that is, a new type
2. It makes RED a symbolic constant with the value 0, BLUE = 1, GREEN = 2, WHITE = 3, BLACK = 4

- Every enumerated constant has an integer value. If not specified, the first constant has the value 0, then 1, 2, ...
- Any one of the constants can be initialized with a particular value, but those that are not initialized count upward from the ones before
``` cpp
enum Color {RED=100, BLUE, GREEN=500, WHITE, BLACK=700};

// Define a new variable of type 'Color'
Color thisFlower;
thisFlower = RED;   // This creates a constant thisFlower with the value 100
```
In this example, RED = 100, BLUE = 101, GREEN = 500, WHITE = 501, BLACK = 700 

**!!! Enumerator variables are generally of type unsigned int !!!**
https://github.com/komxun/Cpp-in-21-days-Part1/blob/127d9c4ff1dd80e54af714e469fc9f810032907b/Day%203%20-%20Variables%20and%20constants/Using_enum.cpp#L1-L20

# Self-assigned operators | Incrementing and Decrementing 
```cpp
x -= 5;  // same as x = x - 5
x += 5;  // same as x = x + 5
x /= 5;  // same as x = x / 5
x *= 5;  // same as x = x * 5
x %= 5;  // same as x = x % 5

x--;  // same as x = x - 1
x++;  // same as x = x + 1
```

# Prefix and Postfix Operators
- The prefix operator (e.g. ++myAge) is evaluated before the assignment
- The postfix operator (e.g. myAge) is evaluated after the assignment
```cpp
int a = ++x;    // same as    x = x+1;
                //            a = x;

int b = x++;    // same as    b = x;
                //            x = x+1;
```
# if Statement
- Multiple statements are required to be surrounded by braces { }
- For one statement, the braces { } are not required but should be put for best practice

```cpp
// Single statement
if (bigNum > smallNum)
  bigNum = smallNum;

// Single statement (good practice)
if (bigNum > smallNum)
{
  bigNum = smallNum;
}

// Multiple statements
if (bigNum > smallNum)
{
  bigNum = smallNum;
  std::cout << "big number: " << bigNum << std::endl;
  std::cout << "small number: " << smallNum << std::endl;
}
```

https://github.com/komxun/Cpp-in-21-days-Part1/blob/e0eec0ee00e6673f449110f8266971fa8867a19e/Day%204%20-%20Expression%20and%20Statements/nested_if_statement.cpp#L1-L37

# Logical Operators
- for best practice, use `if(x != 0)` instead of `if(x)`, and use `if(x == 0)` instead of `if(!x)` 
```cpp
(x == 5) && (y == 5)    // Logical AND
(x == 5) || (y == 5)    // Logical OR
!(x == 5)               // Logical NOT (same as  x !=5 )
```
## Short Circuit Evaluation
**Be careful! **
- When the compiler is evaluating an AND statement, if the first statement is False then the second statement WILL NOT be evaluated !!!
- When the compiler is evaluating and OR statement, if the first statement is True then the second statement WILL NOT be evaluated !!!
```cpp
if ( (x == 5) || (++y == 5) )
// if x is 5 then (++y == 5) is not evaluated. If you are counting on y to be incremented regardless, it will not happen !
```

# The Conditional (Ternary) (?:) Operator
- The conditional operator (`?:`) is C++'s only ternary operator, it is the only operator to take 3 terms
```cpp
(expression1) ? (expression2):(expression3)
```
This means "If expression1 is true, return the value of expression2; otherwise, return the value of expression3."
https://github.com/komxun/Cpp-in-21-days-Part1/blob/e0eec0ee00e6673f449110f8266971fa8867a19e/Day%204%20-%20Expression%20and%20Statements/conditional_operator.cpp#L15-L28

# Functions

Basic example:
```c++
int myFunction(int someValue, float someFloat);
// This means that myFunction will return an integer, and it will take two values

int theValueReturned = myFunction(5, 6.7);
```
![image](https://github.com/komxun/Cpp-in-21-days-Part1/assets/133139057/cae09e41-dbdf-4e8d-b469-6532f1f42266)

## Function Prototype
|![image](https://github.com/komxun/Cpp-in-21-days-Part1/assets/133139057/675ccbad-b091-4b57-881a-9d801eb69837)|
|:--:|
|**Parts of a function prototype**|
- The function prototype is a statement, which means it **ends with a semicolon**;
- The function prototype does not need to contain the names of the parameters, just their type, but it is not a good idea!
- if the return type of function is not stated, its default is `int`
``` cpp
long Area(int, int);   // ok but bad
long Area2(int length, int width);    // ok and good
```

## Defining the Function
- Functions consist of a header and a body
- The value returned MUST be of the same type declared in the function header
- A function that has nothing to return would be declared to return void
- If you don't put a `return` statement into the function, it automatically returns void !!!
- Global variables are not recommended as they are shared data, and one function can change its value in a way that is invisible to another function!

|![image](https://github.com/komxun/Cpp-in-21-days-Part1/assets/133139057/b9794817-84f9-4b37-b5d7-abbdcde74117)|
|:--:|
|**The structure of a function**|

https://github.com/komxun/Cpp-in-21-days-Part1/blob/b8c485475ee75d4e6f2fd440a25013d6705bd2e1/Day%205%20-%20Functions/function_declaration_and_definition.cpp#L4-L31

- You can have more than one return statement in a single function
```cpp
return 5;
return (x>5):   // (returning True of False)
return (MyFunction());
```

## Default Parameters
- A default value is a value to use if none is supplied to a funciton
- A default value can be declared in the function prototype
- Since parameter names are not required in a prototype, this declaration could omit the parameter name

```cpp
long myFunction (int x = 50);    // 50 is the default input to myFunction if no argument is supplied
long myFunction2 (int = 69);     // This statement is also legal
```

- If any of the parameters does not have a default value, no previous parameter can have a default value!!!
``` cpp
long myFunction (int Param1, int Param2, int Param3);
// You can assign a default value to Param2 only if you have assigned a default value to Param3
// You can assign a default value to Param1 only if you've assigned a default value to both Param2 and Param3
```

## Overloading Functions (Function Polymorphism)
C++ allows you to create more than one function with the same name so that the function is more flexible. This is called _function overloading_ or _function polymorphism_
- The functions must differ in their parameter list with a different type of parameter, a different number of parameters, or both!!
- The return types can be the same or different on overloaded functions

```cpp
// Example of function overloading
int myFunction (int, int);
int myFunction (long, long);
int myFunction (long);
```

- The right function will be called automatically by matching the parameters used
- Without function overloading, you would have to create multiple individual function for one task, for example:
``` cpp
// Without function overloading
int AverageInt(int);
float AverageFloat(float);
// With function overloading
int Average(int);
float Average(float);
```
https://github.com/komxun/Cpp-in-21-days-Part1/blob/dc905a4d5f43167f5065a2aedc9d48052c4f3a35/Day%205%20-%20Functions/function_Polymorphism.cpp#L1-L63

# Inline Functions
- When you call the function, the execution of the program jumps to the instruction, and when the function returns, the execution jumps back
- Inline functions can generally improve the efficiency of the program
- Inline functions can be declared with `inline` at the function prototype
- When the inline function is called, the compiler copy-paste the code just as if you had written the statements into the calling function

https://github.com/komxun/Cpp-in-21-days-Part1/blob/dc905a4d5f43167f5065a2aedc9d48052c4f3a35/Day%205%20-%20Functions/inline_function.cpp#L1-L32

## Recursion
- Recursion is a function calling itself, which can be direct or indirect
- Direct recursion = function calls itself, Indirect recursion = function calls another function that calls the first function
- In recursion, a new copy of the function is run. The local variables in the 2nd version are independent of those in 1st version
- Recursive functions need a stop condition !!!

![image](https://github.com/komxun/Cpp-in-21-days-Part1/assets/133139057/46d69d88-e873-4fcc-b168-2b885c5715c8)

https://github.com/komxun/Cpp-in-21-days-Part1/blob/dc905a4d5f43167f5065a2aedc9d48052c4f3a35/Day%205%20-%20Functions/recursion_Fibonacci.cpp#L1-L34

![image](https://github.com/komxun/Cpp-in-21-days-Part1/assets/133139057/aca27b0a-3499-478a-8370-15e1df1497df)



