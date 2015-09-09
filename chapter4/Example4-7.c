#include <string.h>

void ungets(char s[])
{
	int len;
	len = strlen(s);
	void ungetch(int);

	while (len > 0)
		ungetch(s[--len]);
} 
