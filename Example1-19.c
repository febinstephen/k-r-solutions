#include<stdio.h>
#define MAXLINE 1000

void reverse(char s[] );
int getlines(char s[], int maxline);

main()
{
	char line[MAXLINE];
	while(getlines(line, MAXLINE) > 0 )
		reverse(line);
			printf("%s",line);
	return 0;
}

int getlines(char s[], int lim )
{
	int i,c;
	for(i = 0; i <= lim-1 && (c = getchar()) != EOF && c != '\n';++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = '\n';
		++i;
	}
	s[i] = '\0';
	return i;
}	

void reverse(char s[])
{
	int i,j;
	char temp;
	i = 0;   
	while (s[i] != '\0')
		++i;
	--i;
	if (s[i] == '\n')
		--i;
	j = 0;
	while (j < i) {
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		--i;
		++j;
	}
}
