#include<stdio.h>
#define MAXLINE 1000

int lineabvety(char s[],int lim);

main()
{
	int len;
	char line[MAXLINE];
	while (( len = lineabvety(line, MAXLINE)) > 0 )
		if (len > 10 )
			printf("\n%s",line);
}

int lineabvety(char s[], int lim )
{
	int i,c;
	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if ( c == '\n' ) {
		s[i] = '\n';
		++i;
	}
	s[i] = '\0';
	return i;
}
