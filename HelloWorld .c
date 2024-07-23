/*

Task

This challenge requires you to print  on a single line, and then print the already provided input string to stdout. If you are not familiar with C, you may want to read about the printf() command.

Example

The required output is:

Hello, World!  
Life is beautiful  
Function Descriptio

Complete the main() function below.

The main() function has the following input:

string s: a string
Prints

*two strings: * "Hello, World!" on one line and the input string on the next line.
Input Format

There is one line of text, .

Sample Input 0

Welcome to C programming.
Sample Output 0

Hello, World!
Welcome to C programming.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    printf("Hello, World!\n%s" , s) ;
    return 0;
}

