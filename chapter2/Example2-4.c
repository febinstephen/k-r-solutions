#include<stdio.h>

main()
{
	int len,i,tmp;
	char s1[] = "hello";
	char s2[] = "hai";
	len = 0;
	while (s1[len] != '\0')
		++len;
	for ( ; len >= 0; --len) { 
		i = 0;
		tmp = 0;
		while (s2[i] != '\0') {
			if (s2[i] == s1[len])
				++tmp;
			++i;
		}
		if (tmp == 0) 
			printf("%c",s1[len]);
	}	
	printf("\n"); 
}
