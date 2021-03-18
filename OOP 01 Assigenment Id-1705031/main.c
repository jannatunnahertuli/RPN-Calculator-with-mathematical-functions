#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "calc.h"

#define MAXOP 100
#define NUMBER '0'
#define NAME 'n'


/* reverse polish calculator */

int main(void)
{
    int type;
    double op2,op1;
    char s[MAXOP];
    void clearsp(void);

    while((type = getop(s)) != EOF)
    {
        switch(type)
        {
                case NUMBER:
                        push(atof(s));
                        break;
                case NAME:
                        mathfnc(s);
                        break;
                case '+':
                        push(pop()+pop());
                        break;
                case '*':
                        push(pop()*pop());
                        break;
                case '-':
                        op2 = pop();
                        push(pop()-op2);
                        break;
                case '/':
                        op2 = pop();
                        if(op2 != 0.0)
                            push(pop()/op2);
                        else
                            printf("error:zero divisor\n");
                        break;
                case '%':
                        op2 = pop();
                        if(op2 != 0.0)
                            push(fmod(pop(),op2));
                        else
                            printf("erro:zero divisor\n");
                        break;
                case '?':
                        op2=pop();
                        printf("\t%.8g\n",op2);
                        push(op2);
                        break;
                case 'c':
                        clearsp();
                        break;
                case 'd':
                        op2=pop();
                        push(op2);
                        push(op2);
                        break;
                case 's':
                        op1=pop();
                        op2=pop();
                        push(op1);
                        push(op2);
                        break;
                case '\n':
                        printf("\t%.8g\n",pop());
                        break;
                default:
                        printf("error: unknown command %s\n",s);
                        break;
        }
    }
    return 0;
}

