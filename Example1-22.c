#include<stdio.h>

#define MAXLINE 1000 
#define MAXLIM 30

int getlines(char line[],int maxline);
void splitline(char line[]);

main()
{
	int len; 
	char line[MAXLINE];
	while ((len == getlines(line, MAXLINE)) < MAXLINE)
	return 0;
}

int getlines(char s[],int maxline) 
{
	int i,j,c;
	i = 0;
	while (i <= MAXLINE && (c = getchar()) != EOF && c != '\n') {
		s[i] = c;
		++i;
	}
	if (c == '\n') {
        	s[i] = '\n';
		++i;
	}
	s[i] = '\0';
        for (j = 0; j < i; j++) 
		if (j%30 != 0)
			printf("%c",s[j]);		
		else
			printf("\n");
}

