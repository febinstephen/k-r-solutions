#include<stdio.h>

#define MAXLINE 50

enum loop {NO, YES};
enum loop okloop = YES;

main()
{
	int i;
	int c;
        char line[MAXLINE];	
	i = 0;
	while (okloop == YES)
		if (i >= MAXLINE-1)
			okloop = NO;
		if ((c = getchar()) == EOF)
			okloop = NO;
		if (c == '\n')
			okloop = NO;
		else {
			line[i] = c;
			++i;
		}
}
