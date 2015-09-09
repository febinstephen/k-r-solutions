#include<stdio.h>

main()
{
	int i,j;
	char s1[] = 'a-z';
	char s2[10]; 
	char c;	
	i = j = 0;
	while ((c = s1[i++]) != '\0')
		if (s1[i] == '-' && s1[i+1] >= c) {
			i++;
			while (c < s1[i])
				s2[j++] = c++;
		} else 
			s2[j++] = c;
	s2[j++] = '\0';
	printf("%s",s2);
}
