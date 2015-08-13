/*Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.*/
#include<stdio.h>
#define IN 1
#define OUT 0
#define MAXHIST 15
#define MAXWORD 11
main()
{
	int c,i,nc,state;
	int maxvalue;
	int ovrflow;
	int wl[MAXWORD];
	state = OUT;
	ovrflow = 0;
	nc = 0;
	for (i=0; i < MAXWORD; ++i)
		wl[i] = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if (nc > 0)
				if (nc < MAXWORD)
					++wl[nc];
				else
					++ovrflow;
			nc = 0;
		} else if (state == OUT) {
			state = IN;
			nc = 1;	
		} else
			++nc;	
	}
	maxvalue = 0;
	/*for (i = 1; i < MAXLEN; ++i)
		if (wl[i] > maxvalue)
			maxvalue = wl[i];*/
	for (i = 1; i < MAXWORD; ++i)
		printf("%5d - %5d : \n", i, wl[i]);
}
