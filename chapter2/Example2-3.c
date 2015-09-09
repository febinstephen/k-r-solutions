#include<stdio.h>

#define YES 1
#define NO 0

int main()
{
	int inhex,hexdigit,i,n;
	char s[] = "0x1A";
	printf("%s",s);
	i = 0;
	if (s[i] == '0') {
		++i; 
		if (s[i] == 'x' || s[i] == 'X')
			++i;
	}
	n = 0;
	inhex = YES;
	for ( ; inhex == YES; ++i) {
		if (s[i] >= '0' && s[i] <= '9')
			hexdigit = s[i] - '0';
	        else if (s[i] >= 'a' && s[i] <= 'z')
			hexdigit = s[i] - 'a' + 10;
		else if (s[i] >= 'A' && s[i] <= 'Z')
			hexdigit = s[i] - 'A' + 10;	 
		else
			inhex = NO;
		if (inhex == YES)
			n = n * 16 + hexdigit;
	}
	printf("%d\n",n);
}
