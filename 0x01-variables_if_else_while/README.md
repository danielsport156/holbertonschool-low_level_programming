# 0x01 C - Variables, If, Else, While...

## Learning Objectives

### What are the arithmetic operators and how to use them

The arithmetic operators are:
*  \+ (addition)
*  \- (minus)
* / (division)
* * (multiplication)
* % : modulus (or mod) . returns the remainder of a division:

Example of modulus `10 % 3 = 1`


### What are the logical operators (sometimes called boolean operators) and how to use them
We have three logical operators:
| Operator | Does | Example|
|----------|------|--------|
| &&       | AND  | 7 > 1 && 9 < 7 = FALSE
|----------|------|--------|
|\| \|     | OR   | 7 > 1 \|\| 9 < 7 = TRUE
| !        | NOT  | !(7 > 1) = FALSE


### What the the relational operators and how to use them
A relational operator checks the relationship between two operands. If true, returns 1; if false, returns 0. They are:
* ==
* \>
* <
* <=
* \>=
* !=


### What values are considered TRUE and FALSE in C
#### True = 1
#### False = 0

### How to use the  `if`,  `if ... else`  statements

int x = random number
if (x > 0)
{
   /* execute this if comparison is true */
}
else if (x < 0)
{
   /* execute this if comparison is false */
}
else
{
	/* execute if all previous comparisons are false */
}


### How to use comments

/* This is an example comment */

Multi line:

/*
 * This is a
 * multiline comment
 */

### How to declare variables of types  `char`,  `int`,  `unsigned int`


char char_variable;
int int_variable;
unsigned int unsigned_variable;



### How to assign values to variables

c = 0
s = 5
r = 8

### How to print the values of variables of type  `char`,  `int`,  `unsigned int`  with  `printf`

### How to use the  `while`  loop

### How to use variables with the  `while`  loop

### How to print variables using  `printf`

### What is the  `ASCII`  character set

### What are the purpose of the  `gcc`  flags  `-m32`  and  `-m64`