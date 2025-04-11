# Embedded_C_using_STM32_and_GCC

The project contains C source codes for Windows system using GCC compiler as well as target STM32F411VE Discovery board which coveres basic concepts in C essential for embedded systems.<br>

STM32 Cube IDE link:<br>
https://www.st.com/en/development-tools/stm32cubeide.html<br>

#Installing compiler (GCC) for host (WINDOWS):<br>

CTOOLS link:<br>
https://drive.google.com/file/d/13UZ6V4xekEzqs3k6aVIhuicgbbeY8Bzt/view?usp=sharing<br>
Setting:<br>
1. Search for "Edit the System Environment Variables"<br>
2. "Environmet Variables" -> "Path" -> "NEW"<br>
3. Add "<path of CTOOLS folder>\bin -> Click on "OK"<br>

#Creating a project for the HOST<br>
Go to "File" -> New -> C/CPP Project -> C Managed Build -> MINGW -> Debug Release -> Finish<br>

Key points:<br>

Commenting in 'C'<br>
// -> single line comment<br>
/* -> multi line comments<br>

Standard output:<br>
Printing quotes<br>
\"\"\" -> """<br>
Printing backslash<br>
\\\\\\\\ -> \\\\<br>
Printing single quotes<br>
\" or \' -> for single quotes or double quotes<br>
\\ -> Backslash<br>
\r -> moves the cursor to the beginning of current line horizontally<br>
\t -> Horizontal tab<br>
\0 -> Null<br>

Data types:<br>
Integer data types: char, short int, int, long int, long long int<br>
'C' Integer data types and value ranges<br>
32-bit ARM based microcontrollers:<br>
(signed) int 32 bits<br>
(signed) long 32 bits<br>
For XC8, size of int is 16-bit and long is 32-bit<br>
int and long values can vary according to compiler<br>
signed char -> 1 byte -> -128 to 127<br>
unsigned char -> 1 byte -> 0 to 255<br>
short int -> 2 byte -> -32768 to 32767<br>
unsigned short int -> 0 to 65535<br>
int -> 4 bytes -> -2147483648 to 2147483647<br>
unsigned int -> 4 bytes -> 0 to 4294967295<br>
long-> 8 bytes<br>
unsigned long -> 8<br>
long long int -> 8<br>
unsigned long long int -> 8<br>
short -> short int<br>
long -> long int<br>
ARM -> int = 4 bytes<br>
int and long data type can cause portability issues<br>
-ve no. is stored using 2's compliment<br>
%x -> hex;<br>
%o -> octal;<br>
%c -> character;<br>
%u -> Unsigned Integer;<br>
%ld -> Long Int;<br>
%lld or %llu for long long<br>
%I64d or %I64u for MINGW compiler<br>

Variables:<br>
variable definition is also declaration but not all declaration are definitions.<br>
Variable Declaration: compiler is informed that a variable exists along with its type. The compiler does not generate instructions to allocate the storage for the varaiable<br>
First letter of the variable cannot be a digit. It should be either an alphabet or underscore.<br>
Variable name: not more than 30 characters. Contains alphabets(both uppercase and lowercase), digits and underscore.<br>
For variable definition, need to state variable type followed by variable name. It is used to let compiler know that we are going to need memory for the variable.<br>
ex. char myExamScore;<br>
In ARM, memory address is of 32 bits<br>
Variable acts as a label to a memory location where the data is stored<br>

Tyepcasting:<br>
(float) 80 -> Explicit / 3 -> Implicit<br>
same result<br>
80 -> Explicit / (float) 3<br>

Scope:<br>
default data type used by compiler for constant is 4 byte<br>
user defined header files are always included in double quotes ""<br>
return_type function_name(parameter_list)<br>
{<br>
//body of the function<br>
}<br>
executable statements must be inside body of the function<br>
extern storage class specifier is used to access global variable which is defined outside the scope of a file<br>
Use cases of 'static' with functions<br>
static keyword added to function restricts it to be accessed from outside files<br>
static variables cannot be extern<br>
static does not allow any a variable to be modified by external file<br>
static makes variable global but keeps it private to the function i.e scope is global but visibility is local<br>
local variable dies after execution of the function<br>
Local Variables scope is Within the body of the function. Lose existence once the execution control comes out of the function body.<br>
Local Variables default value is unpredictable (garbage value).<br>
Local Variables lifetime is till the end of the execution of a function in which a variable is defined.<br>
Global variable scope is visible to all functions of a program.<br>
All uninitialized global variables will have 0 as default value.<br>
Lifetime of global variable is till the end of the execution of the program.<br>
scope of local variable is bound to area within parentheses only<br>
global and local scope can be defined for same variable name<br>
variables inside main can also be not accessed by function calls from main<br>

Standard Input:<br>
char a1 = 'A' = 65; #ASCII value<br>
ANSI: American National Standards Institute<br>
ASCII: American standard code for information interchange<br>
use %le to use scientific notation<br>
fflush -> clears output buffer<br>
getchar() -> read single character<br>
%c for ASCII<br>

Memory types:<br>
Flash: Electrically erasable<br>
FRAM: Ferroelectric Random Access Memory<br>
MPROM: not erasable<br>
EPROM: UV erasable<br>
EEPROM: Electrically erasable<br>

Build process<br>
preprocessing->compilation->linking<br>
.elf -> executable + debugging<br>
-save-temps -> saves the files generated while building project<br>
main.s -> Assembler stage -> main.o -> assembly level mnemonics converted into opcodes (machine codes for instructions)<br>
main.s -> code generation stage -> Higher level language converted into processor architectural level mnemonics<br>
main.i -> output of preprocessing stage done by compiler<br>
main.i -> code + contents of stdio.h<br>

Pointers:<br>
+1 increments the variable by the size of data type<br>
%p is used to print address<br>
char *pAddress is same as char* pAddress<br>
long long -> 8 bytes<br>
pointer variable data type decides the type of operation performed on the variable<br>
irrespective of pointer data type, the compiler will reserve 8 bytes for pointer variable<br>
In case of pointer variable definition, 8 bytes are allocated by compiler to the variable<br>
"*" added to differentiate between pointer variable and normal variable<br>
-ve values are also considered as true<br>
pointer address can also be incremented by using unary operators<br>
since address is 8 bytes so use unsigned long for storing address<br>
%p used to print address of variable<br>

Precedence:<br>
comparison operators have lower precedence over arithmetic operators<br>
"*" and / have same precedence. Associativity is from left to right<br>

Importance of <stdint.h><br>
uintptr_t, intmax_t, uintmax_t<br>
stdint.h has alias data type<br>

Operators:<br>
Don't give semi colon after if statement<br>
In logical OR, if one operand has non-zero value then second operand is not evaluated<br>

Function prototype:<br>
void myFun1(void);<br>
