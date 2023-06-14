# C++ in 21 days Part 1
My note for learning C++ in 21 days (Day 1 - 5)

# About C++
C++ is a compiled languages, meaning you can distribute the executable program (.exe) to people who don’t have the compiler. C++ fully supports object-oriented programming (OOP), including encapsulation, inheritance, and polymorphism.

Encapsulation is the property of being a self-contained unit. You can accomplish data hiding with encapsulation. Changes can be made to workings of program without affecting the operation of the program.With inheritance, you can declare a new type that is an extension of an existing type and add additional capabilities. The program may respond differently than the original one but a user does not have to know about these differences. This is Polymorphism, the same name taking many forms.

# The Process of Creating the Program
1.	Create a source code file with a .cpp extension
2.	Compile the source code to create an object file (.obj or .o extension) with the Compiler
3.	Link the object file with any needed libraries to produce an executable program (.exe)

# The Anatomy of a C++ Program
- The # symbol signals the preprocessor 
- #include is a preprocessor instruction meaning that “What follows is a file-name. Find that file, read it, and place it right here”
- iostream is a file in the directory that holds all the include files for your compiler
- main() is a special function that’s called automatically when your program starts. Every C++ program has a main() function
- For best practice, main() should be specified to return integer value 0

# Using the Standard Namespace
- Declare to use the standard namespace (std)
- std::endl  is used to enter a new line to the console
- std::endl is preferable to the use of \n because endl is adapted to the operating system in use. 

https://github.com/komxun/Cpp-in-21-days-Part1/blob/068273d47c433c7fa56719e12f97d39bdf59fbfb/Day%202%20-%20Anatomy%20of%20C%2B%2B%20program/using_using.cpp#L1-L23

# Using Functions
- A function that has nothing to return would be declared to return void
- Functions consist of a header and a body
- The header consists of the return type, the function name, and the parameters to that function (their values = arguments)
- The value returned MUST be of the same type declared in the function header
- If you don't put a return statement into the function, it automatically returns void !!!

https://github.com/komxun/Cpp-in-21-days-Part1/blob/068273d47c433c7fa56719e12f97d39bdf59fbfb/Day%202%20-%20Anatomy%20of%20C%2B%2B%20program/using_function_2.cpp#L5-L9

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

# Creating Aliases with type definition (typedef)
- typedef is used to create a synonym of the phrase (not creating a new type)
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
# Constants
- When a constant is initialized, you cannot assign a new value later!
- C++ has two types of constants: literal and symbolic
- A literal constant is a value typed directly into your program (the number is a constant)
- A symbolic constant is a constant that is represented by a name
- Symbolic constant can be declared with 1) #define (NOT recommended) 2) const

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

- Every enymerated constant has an integer value. If not specified, the first constant has the value 0, then 1, 2, ...
- Any one of the constants can be initialized with a particular value, but those that are not initialized count upward from the ones before
``` cpp
enum Color {RED=100, BLUE, GREEN=500, WHITE, BLACK=700};

// Define a new variable of type 'Color'
Color thisFlower;
thisFlower = RED;   // This create a constant thisFlower with the value 100
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
- Multiple statements are required to be surrrounded by braces {}
- For one statement, the braces {} are not required, but should be put for best practice

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
- for best practice, use if(x != 0) instead of if(x), and use if(x == 0) instead of if(!x) 
```cpp
(x == 5) && (y == 5)    // Logical AND
(x == 5) || (y == 5)    // Logical OR
!(x == 5)               // Logical NOT (same as  x !=5 )
```
## Short Circuit Evaluation
**Becareful! **
- When the compiler is evaluating an AND statement, if the first statement is False then the second statement WILL NOT be evaluated !!!
- When the compiler is evaluating and OR statement, if the first statement is True then the second statement WILL NOT be evaluated !!!
```cpp
if ( (x == 5) || (++y == 5) )
// if x is 5 then (++y == 5) is not evaluated. If you are counting on y to be incremented regardless, it will not happen !
```

# The Conditional (Ternary) (?:) Operator
- The conditional operator (?:) is C++'s only ternary operator, it is the only operator to take 3 terms
```cpp
(expression1) ? (expression2):(expression3)
```
This means "If expression1 is true, return the value of expression2; otherwise, return the value of expressio3."
https://github.com/komxun/Cpp-in-21-days-Part1/blob/e0eec0ee00e6673f449110f8266971fa8867a19e/Day%204%20-%20Expression%20and%20Statements/conditional_operator.cpp#L15-L28


