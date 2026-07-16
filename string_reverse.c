#include<stdio.h>
#define MAX 30

int top =-1;
char stack [];
void push (char val);
char pop();

void main()
{
    char str[30];
    int i;

    printf("\n Enter the string: ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        push(str[i]);
    }
    printf("\n Reverse String %d\n");
    while(top!=-1)
    {
        printf("\n %c",pop());
    }
}

 void push(char val)
{
    if(top==MAX-1)
    {
        printf("\n Stack Overflow..");
        return 0;
    }
    else
    {
        stack[++top] = val;
    }
}

char pop()
{
    if (top == -1)
    {
        printf("\n Stack Underflow..\n");
        return 1;
    }
    else
    {
        return stack[top--];
    }
}
