#include<stdio.h>

#define MAXCOLM 10
#define TABINC 8

char line[MAXCOLM];

int findblk(int pos);
void printl(int pos);
int newpos(int pos);
//int exptab(int pos); 

main()
{
	int pos,c;
	pos = 0;
	while ((c == getchar()) != EOF ) {
		line[pos] = c;
		if (c == '\n') {
			printl(pos);
			pos = 0;
		} else if (++pos >= MAXCOLM) {
			pos = findblk(pos);
			printl(pos);
			pos = newpos(pos);
		} else if (c == '\t') {
	               //pos = exptab(pos);
		}
	}
}


void printl(int pos)
{
	int i;
	for (i=0; i<pos; ++i)
		putchar(line[i]);
	if (pos > 0)
		putchar('\n');
}

int findblk(int pos)
{
	while (pos > 0 && line[pos] != ' ')
		--pos;
	if (pos == 0)
		return MAXCOLM;
	else
		return pos+1;
}

		
int newpos(int pos) {
	int i,j;
	
	if (pos <= 0 || pos >= MAXCOLM)
		return 0;
	else {
		i = 0;
		for (j = pos; j < MAXCOLM; ++j) {
			line[i] = line[j];
			++i;
		}
	return i;
	}
}  
