# Embedded_C_using_STM32

The project contains C source codes for Windows system using GCC compiler as well as target STM32F411VE Discovery board which coveres basic concepts in C essential for embedded systems.

STM32 Cube IDE link:
https://www.st.com/en/development-tools/stm32cubeide.html

#Installing compiler (GCC) for host (WINDOWS):

CTOOLS link:
https://drive.google.com/file/d/13UZ6V4xekEzqs3k6aVIhuicgbbeY8Bzt/view?usp=sharing
Setting:
1. Search for "Edit the System Environment Variables"
2. "Environmet Variables" -> "Path" -> "NEW"
3. Add "<path of CTOOLS folder>\bin -> Click on "OK"

#Creating a project for the HOST
Go to "File" -> New -> C/CPP Project -> C Managed Build -> MINGW -> Debug Release -> Finish

Key points:

Commenting in 'C'
// -> single line comment
/* -> multi line comments

Standard output:
Printing quotes
\"\"\" -> """
Printing backslash
\\\\\\\\ -> \\\\
Printing single quotes
\" or \' -> for single quotes or double quotes
\\ -> Backslash
\r -> moves the cursor to the beginning of current line horizontally
\t -> Horizontal tab
\0 -> Null

Data types:
Integer data types: char, short int, int, long int, long long int
'C' Integer data types and value ranges
32-bit ARM based microcontrollers:
(signed) int 32 bits
(signed) long 32 bits
For XC8, size of int is 16-bit and long is 32-bit
int and long values can vary according to compiler
signed char -> 1 byte -> -128 to 127
unsigned char -> 1 byte -> 0 to 255
short int -> 2 byte -> -32768 to 32767
unsigned short int -> 0 to 65535
int -> 4 bytes -> -2147483648 to 2147483647
unsigned int -> 4 bytes -> 0 to 4294967295
long-> 8 bytes
unsigned long -> 8
long long int -> 8
unsigned long long int -> 8
short -> short int
long -> long int
ARM -> int = 4 bytes
int and long data type can cause portability issues
-ve no. is stored using 2's compliment
%x -> hex;
%o -> octal;
%c -> character;
%u -> Unsigned Integer;
%ld -> Long Int;
%lld or %llu for long long
%I64d or %I64u for MINGW compiler

Variables:
variable definition is also declaration but not all declaration are definitions.
Variable Declaration: compiler is informed that a variable exists along with its type. The compiler does not generate instructions to allocate the storage for the varaiable
First letter of the variable cannot be a digit. It should be either an alphabet or underscore.
Variable name: not more than 30 characters. Contains alphabets(both uppercase and lowercase), digits and underscore.
For variable definition, need to state variable type followed by variable name. It is used to let compiler know that we are going to need memory for the variable.
ex. char myExamScore;
In ARM, memory address is of 32 bits
Variable acts as a label to a memory location where the data is stored

Tyepcasting:
(float) 80 -> Explicit / 3 -> Implicit
same result
80 -> Explicit / (float) 3

Scope:
default data type used by compiler for constant is 4 byte
user defined header files are always included in double quotes ""
return_type function_name(parameter_list)
{

//body of the function

}
executable statements must be inside body of the function
extern storage class specifier is used to access global variable which is defined outside the scope of a file
Use cases of 'static' with functions
static keyword added to function restricts it to be accessed from outside files
static variables cannot be extern
static does not allow any a variable to be modified by external file
static makes variable global but keeps it private to the function i.e scope is global but visibility is local
local variable dies after execution of the function
Local Variables scope is Within the body of the function. Lose existence once the execution control comes out of the function body.
Local Variables default value is unpredictable (garbage value).
Local Variables lifetime is till the end of the execution of a function in which a variable is defined.
Global variable scope is visible to all functions of a program.
All uninitialized global variables will have 0 as default value.
Lifetime of global variable is till the end of the execution of the program.
scope of local variable is bound to area within parentheses only
global and local scope can be defined for same variable name
variables inside main can also be not accessed by function calls from main

Standard Input:
char a1 = 'A' = 65; #ASCII value
ANSI: American National Standards Institute
ASCII: American standard code for information interchange
use %le to use scientific notation
fflush -> clears output buffer
getchar() -> read single character
%c for ASCII

Memory types:
Flash: Electrically erasable
FRAM: Ferroelectric Random Access Memory
MPROM: not erasable
EPROM: UV erasable
EEPROM: Electrically erasable

Build process
preprocessing->compilation->linking
.elf -> executable + debugging
-save-temps -> saves the files generated while building project
main.s -> Assembler stage -> main.o -> assembly level mnemonics converted into opcodes (machine codes for instructions)
main.s -> code generation stage -> Higher level language converted into processor architectural level mnemonics
main.i -> output of preprocessing stage done by compiler
main.i -> code + contents of stdio.h

Pointers:
+1 increments the variable by the size of data type
%p is used to print address
char *pAddress is same as char* pAddress
long long -> 8 bytes
pointer variable data type decides the type of operation performed on the variable
irrespective of pointer data type, the compiler will reserve 8 bytes for pointer variable
In case of pointer variable definition, 8 bytes are allocated by compiler to the variable
* added to differentiate between pointer variable and normal variable
-ve values are also considered as true
pointer address can also be incremented by using unary operators
since address is 8 bytes so use unsigned long for storing address
%p used to print address of variable

Precedence:
comparison operators have lower precedence over arithmetic operators
* and / have same precedence. Associativity is from left to right

Importance of <stdint.h>
uintptr_t, intmax_t, uintmax_t
stdint.h has alias data type


Operators:
Don't give semi colon after if statement
In logical OR, if one operand has non-zero value then second operand is not evaluated

Function prototype:
void myFun1(void);
