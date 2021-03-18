
# Installation Process:

First using the Shell Command Line in Terminal, tunnel to the project folder via “cd” (change directory) a command similar to cd autodiction/vi-workspace/trial_menu

Using Vim Editor : write command “vim filename.c or vi filename.cpp”. Enter “I” , to activate insert mode in vi editor . Write your code Enter “Esc” Enter “:” write “wq” ,Enter.

Using Compiler : for c code write “gcc - o filename filename.c” ,Enter for cpp code write “g++ - o filename filename.cpp” , Enter After compiling a runnable file will be created .

Run : write “./filename” , Enter.


# Code Explanation:

This program has number of helper functions like getop, push and pop, which we use to the implement the reverse polish notation calculator. The function getop takes a string and determines if it is number. If it is a number, both integer or decimal, it will store that number in the array and return a flag NUMBER which states that number is found. It will push that number to the stack. If it getop returns an operator like +, -, * or /, it will pop two numbers out of the stack and operate on it. When it encounters a /, it ensures that the second operand is not 0 and disallows.
The RPN calculator has addition features like doing mathematical functions. In the input, if a string is given then the calculator identifies it as a NAME and goes to the mathfun.
In the mathfun, the string input is compared with “sin” and if it is a sin, the mathematical function sin is called on the popped value. If the intput is cos, the cosine function is called and if the input is “pow”, then first value is popped and stored in op2 and second value is raised to the power of op2.


# Assignment on: Compiling multiple source files into a single executable
                          ID          : 1705031
                          Reg         : 000009999
                          Name        : Jannatunnaher Tuli
                          Session     : 2017-2018
                          Depertment  : Computer Science and Engineering.
                          University  : Begum Rokeya University, Rangpur.
