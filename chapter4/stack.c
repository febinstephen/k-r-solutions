#include <stdio.h>

#define MAXSIZE 10

int stack[MAXSIZE];
int sp = 0;
void push(int i);
int pop();

main()
{
	push(1);
	push(2);
	pop();
	pop();
	pop();
	push(5);
	pop();
}

void push(int c)
{
	if (sp < MAXSIZE)
		stack[sp++] = c;
	else
		printf("Stack is full");
}

int pop()
{
	if (sp > 0)
		printf("%d\n",stack[--sp]);
	else
	       printf("stack is empty");
} 

	
