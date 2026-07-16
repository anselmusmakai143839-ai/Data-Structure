#include<stdio.h>
#define MAX 30

int top =-1;
int stack [MAX];
void push (int val);
int pop();

void main()
{
    int n,i,fact=1;
    printf("\n Enter number: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        push(i);
    }
    while(top!=-1)
    {
        fact=fact*pop();
    }
    printf("\n Factorial of %d is : %d",n,fact);
}

 void push(int val)
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

int pop()
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
