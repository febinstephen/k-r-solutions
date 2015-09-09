#include<stdio.h>
main()
{
	int c,i,j,lastc;
	int x = 0;
	char s1[100];
	char s2[100];
	i = 0;
	while ((c = getchar()) != EOF) {
		s1[i] = c;
		++i;
	}
	s1[i] = '\0';
	lastc = 0;
	i = 0;
	while (s1[i] != '\0') {
		lastc = s1[i];
		if (s1[i] == '-') {
			j = lastc;
			while (++j <= s1[++i]) {
				s2[x] = j;
				++x;
			}
		} else {
			;
		}  
	}
	s2[x] = '\0';
	printf("%s\n",s2);
} 
