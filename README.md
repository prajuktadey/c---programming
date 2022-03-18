1. Whitespace is usually characters that are not visible including new lines, psaces and tabs and whitespaces are mostly ignored in c++.

2. The include directive instructs the preprocessor to include another file to pass to the compiler.

3. Identifiers provide readable names for   variables, functions, classes, objects, labels and defined types.
In c++ identifiers are made up of letters and numbers within a set of constraints.

These include the 26 letters of the ISO latin alphabet in both uppercase and lowercase.

The 10 Western Arabic numerals and the ASCII underscore character.

An identifer may not begin with a numeral.

Identifiers may not conflict with reserved words. In current c++ standard reserves 73 keywords plus 11 alternative tokens.

a. Identifiers are case sensitive.
b. Current standards allow letters that are not a part of the ISO latin alphabet.

4. Pointers

Pointers are powerful and dangerous data type.

A variable is a typed and named location in memory.
The name of the variable is used as an index to map to a memory address and a particular associated data type.

C++ also provides a pointer type that is a pointer to a value.

int *ip = This is a pointer definition.
So memory is allocated for a value of type pointer.
The compiler associates this pointer with the int type. So, we call this an integer pointer. It is a pointer to an integer value.

int * ip;
ip= &x;  //Here, the address of the integer variable named x is placed in the integer pointer variable named ip.

The ampersand operator is formally called the reference operator but in this context it's more commonly called the address operator. It returns the address of an object suitable for assigning to a pointer.

5. A primitive array is defined in a structure or a class. The array is a primitive type. Primitive are essential tools for building derived types.

There is also an STL class called array and this can lead to some confusion.

6. A primitive string is a special kind of an array. Not to be confused with the string class in the standard template library, the primitive string is often called a C string.

A primitive string is just a special case of an array of characters.

7. A structure is an aggregated variable in c++. 
It is a way of collecting a number of disparate variables in a single container.

8. C++ makes no distinction between a function and a procedure.

9. When we're building an object based on a class, we're building an instance of that class and each of these is a separate instance, each with its own memory space and each most importantly with its own copy of the data member.

10. Data Types:
a. int
Commonly 32 bits.
Single integer value.
Range: -2147483648 to 2147483647.

b. unsigned int
Commonly 32 bits.
Unsigned integer value.
Range: 0 to 4294967295.

Primitive types are the ones that are used in building other compounds types.
a. Integers.
b. Floating point types.
c. Boolean types.

11. Intger types include:
a. char
b. short int
c. int
d. long int
e. long long int

12. Qualifiers are used to adjust qualities of an object ot a varible.

e.g: const static int i= 42;
Here, the const and static are qualifiers. They tell the compiler that this varaible will be immutable that's the const qualifier, and they will have static storage duration.

CV QUALIFIERS         STORAGE DURATION
const                 static
mutable               register
volatile              extern

It's value cannot be changed once it's been defined. Mutable is used on a data member to make it writeable from a const member function.

By default a variable defined within a block has automatic lifetime where the lifetime of the variable is the duration of the block. 

13. It takes 32 bits on mac but it may take more or less space on your machine depending on how it aligns values and memory and like that.  This becomes an issue if you store your pack data in a file and then expect to read it on a different machine.

14. C++ has an enumerated type called enum. If you don't specify they tend to start at 0. Then they go sequentially from there if you are not specifying.

ENUM is referred to as a type but it is not a type. It works like a constant and it makes a great alternative t0 the preprocessor macros which is how a lot of people do things like this. But with enum they are type safe. 

15. Union is a data structure that allows you o use the same memory space fo different types.
IPv4 addresses is a 32 bit number that's typically displayed as octets. They are called octets because they are 8 bits.

The _t is traditional for type def types. It's nor required by the language but it's a good idea to do  it because then you've got an idea when you're using it, that it's a typedef.

16. The void type has special meaning in c++. It's used to specify lack of value for function parameters and function returns.

17. In C, the void type in the argument list means the function takes no arguments. So, the usage with void is simply allowed for compatability with C but it's not required. 

VOID IS SYNTACTICALLY A TYPE, IT'S ONLY USED IN SPECIAL CIRCUMSTANCES. AS A RETURN TYPE OR AS A PARAMETER TYPE.

18. The auto-type is a relatively recent feature in c++ bginning with c++11. 

19. In c++ the null pointer has always been problematic.

20. Functions are the basis of the class methods. They create containers for logical subset of codes.

21. You can use the class to create an object. The object is sometimes called an instance of a class.

22. Objeect members are the contents of an object. There are two types of members. Data members are the members that represent encapsulated data. Data members are sometimes called properties. 

23. Function members are the functions associated with the class and function members are sometimes called methods.

24. Constructors and destructors are special function members that are called when an object is created or destroyed.

25. Constructor are named with the name of the class. The destructor is defined when the object is destroyed.

26. The destructor is named with the tilde character.

27. C++ templates are marvelously simple and powerful. This is the c++ feature that supports generic programming. Generic programming refers to code that works independant of type while c++ is a strongly typed language.

28. Template declarations look just like normal function or class declarations with one distinction. They are preceded by the template keyword, and a set of type identifiers. These type identifiers are used as placeholders by the template code to be replaced during compilation with actual types.

29. Disadavantages of template:
a. Larger executables
b. Confusing error messages
c. Longer compile time

30. fopen(filename, mode)
    fread(str, count, stream)
    fwrite(str, stream)
    fgets(buffer, size, count, stream)
    fputs(buffer, size, count, stream)
    strncpy(dest, src, count)
    strncat(dest, src, count)
    strncmp(lhs, rhs)
    strlen(str, count)
    strchr(str, ch)
    strstr(dest, src)

31. Date and time functions:
a. time(time)
b. gmtime(time)
c.localtime(time)
d. strftime(str, count, format, time)

Utilities:
1. Math
2. Localization
3. Process control
4. System services
