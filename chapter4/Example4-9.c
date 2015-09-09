#include <stdio.h>

#define MAXVAL 100

int bufp = 0;
int buf[MAXVAL];
int c;

int getch(void)
{
	return (bufp > 0) ? buf[bufp--] :(c = getchar());
}

void ungetch(int a)
{
	if (bufp > MAXVAL)
		printf("too many characters");
	else
		buf[bufp++] = a;
} 

getch();
ungetch(c);
