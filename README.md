# Printf Project

Welcome to our printf project done by the Holberton Students <br>
<br>
![giphy](https://user-images.githubusercontent.com/124347057/229031599-d81f7f28-3740-4fa7-b1fa-7e639661288c.gif)

Kathryn Kelly and Bryce Knight.<br>
Team kat-and-myce.

## Installation

To install this function yourself you are going to be cloning our repository
by using the command `git clone`. <br>

This is the full `git clone` command to clone our repository:<br>
`git clone https://github.com/Kathryn8/holbertonschool-printf.git`
<br>

#### Makefile
Our repository contains a makefile and with file it allows you to compile all of the our code to your own main.c
with simple command `make` adn the output is an executable called `./_printf` <br> 

Example: <br>
`make`  this will compile everything including your own main.c <br>

`./_printf` <br>
`./_printf` is the executable that you will run to display the contains of your main.c when you use _printf<br>


Example of your main.c: <br>
`#include "main.h"`<br>
`int main()`<br>
`{`<br>
   `_printf("Hello World")`<br>
   `return(1);`<br>
 `}`<br>

when you run `./_printf` the outcome will be `Hello world`

## Documentation


#### SYNOPSIS
   #include <stdio.h> <br>
   #include “main.h”	<br>

   int _printf(const char *format, ...);<br>
                  
#### DESCRIPTION
The _printf() function writes output to the standard output stream, according to the format specifiers inside the format string.
The subsequent arguments are converted under the control of the format string and its format specifiers.<br> 

The format string is a string of characters that will all be printed sequentially except for when the following character combinations appear:

#### FORMAT SPECIFIERS:<br>
%c - prints a char or character<br>
%s - prints a char * or pointer to an array of chars. The array must contain a terminating null byte (‘\0’), and the null byte is not included in the _printf output.<br>
%i - prints an int or integer<br>
%d - prints a decimal number or integer in base-10<br>

#### FORMAT CONTROLS:
%% - prints a single %<br>
\"     double quote<br>
       \\     backslash<br>
       \a     alert (BEL)<br>
       \b     backspace<br>
       \n     new line<br>
       \r     carriage return<br>
       \t     horizontal tab<br>
       \v     vertical tab<br>

This  _printf function takes no flags and cannot handle field width, precision or length modifiers.
The number of arguments following the format string must be equal or greater than the number of format specifiers in the format string.  

#### RETURN VALUE         
This function returns an integer value that is equal to the number of characters printed. 
If a string ends with %, the return value is -1.
If the format string is NULL the return value is -1.

 
## Flowchart 
Below is a flowchart showing the basic implementation of how our function works
and the steps the function goes through to return the desired result.
##
![image](https://user-images.githubusercontent.com/124347057/229001812-5c3381ea-edde-4dc7-813f-228230a882a6.png)

## AUTHORS
To contact the authors of this page and to review the _printf code or submit pull requests, please visit:
https://github.com/Kathryn8/holbertonschool-printf <br>
https://github.com/BryceKnight16/holbertonschool-printf
 
