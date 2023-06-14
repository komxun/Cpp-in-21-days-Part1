# C++ in 21 days (Week 1)
My note for learning C++ in 21 days

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

https://github.com/komxun/Cpp-in-21-days-Week1/blob/068273d47c433c7fa56719e12f97d39bdf59fbfb/Day%202%20-%20Anatomy%20of%20C%2B%2B%20program/using_using.cpp#L1-L23

# Using Functions
- A function that has nothing to return would be declared to return void
- Functions consist of a header and a body
- The header consists of the return type, the function name, and the parameters to that function (their values = arguments)
- The value returned MUST be of the same type declared in the function header
- If you don't put a return statement into the function, it automatically returns void !!!

https://github.com/komxun/Cpp-in-21-days-Week1/blob/068273d47c433c7fa56719e12f97d39bdf59fbfb/Day%202%20-%20Anatomy%20of%20C%2B%2B%20program/using_function_2.cpp#L5-L9

# Variables and Constants
- You must tell the compiler what type of variable it is: integer, floating-point number, character, etc.
- signed integers can be negative or positive. unsigned integers are always positive
- You define a variable by stating its type, followed by spaces, followed by the variable name and a semicolon
- C++ is case sensitive, meaning uppercase and lowercase letters are different!

![image](https://github.com/komxun/Cpp-in-21-days-Week1/assets/133139057/c46ff1c7-5457-476a-b2a5-0821f88ac91c)


