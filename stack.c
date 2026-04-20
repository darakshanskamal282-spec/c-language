#include<stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int x)
{
    if (top == SIZE - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top = top + 1;
        stack[top] = x;
    }
}

void pop()
{
    int y;
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        y = stack[top];
        printf("Popped: %d\n", y);
        top = top - 1;
    }
}

int main ()
{
    push(10);
    push(20);
    push(15);
    pop();
    push(16);
    push(25);
    pop();
    push(30);

    for (int i = top; i >= 0; i--)
    {
        printf("%d is %d\n", i, stack[i]);
    }

    return 0;
}