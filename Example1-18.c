t#include<stdio.h>
#define MAXLINE 1000

int getlines(char s[], int lim);
int removeblank(char s[]);

main()
{

	char line[MAXLINE];

	while (getlines(line, MAXLINE) > 0 )  
		if (removeblank(line) > 0)
			printf("%s",line);


}

int getlines(char s[], int lim )
{
	int i,c;
	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if ( c == '\n' ) {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

int removeblank(char s[]) {
	int i;
	i = 0;
	while(s[i] != '\n')
		++i;
        --i;
	while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
		--i;
	if (i >= 0) {
		++i;
		s[i] = '\n';
		++i;
		s[i] = '\0';
	}
	return i;
}



