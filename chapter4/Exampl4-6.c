#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAXOP 100
#define NUMBER '0'

int getop(char []);
void push(double);
double pop(void);

main()
{
	int type;
	double op2;
	char s[MAXOP];
	while ((type = getop(s)) != EOF) {
			switch(type) {
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop());	
				break;
			case '-':
				op2 = pop();
				push(op2 + pop());
				break;
			case '/':
				op2 = pop();
				push(op2 + pop());
				break;
			case '\n':
				printf("\t%.8g\n",pop());
				break;
			case '%':
				op2 = pop();
				if (op2 != 0.0) 
					push(fmod(pop(),op2));
				else
					printf("Zero division error");
				break; 
			default:
				printf("unknown character");
				break;
			}
	}	
	return 0;
}


#define MAXVAL 100

int sp = 0;
int val[MAXVAL];

void push(double f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("stack full");
}

double pop(void)
{
	if (sp > 0)
		return val[--sp];
	else
		printf("stack is empty");
} 



#include <ctype.h>

int getch(void);
void ungetch(int c); 

int getop(char s[])
{
	int i,c;
	
	while ((s[0] = c = getch()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	if (!isdigit(c) && c != '.')
		return c;
	if (isdigit(c))
		while (isdigit(s[i++] = c = getch()))
			;
	if (c == '.')
		while (isdigit(s[i++] = c = getch()))
			;
	s[i] = '\0';
	if (c != EOF)
		ungetch(c);
	return NUMBER; 
}


#define BUFFSIZE 100

char buf[BUFFSIZE];
int bufp = 0;

int getch(void)
{
	return bufp > 0 ? buf[bufp--] : getchar(); 
}

void ungetch(int c)
{
	if (bufp >= BUFFSIZE)
		printf("ungetc:too many characters");
	else
		buf[bufp++] = c;
}
