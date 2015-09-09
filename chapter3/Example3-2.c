#include<stdio.h>

main()
{
	char s[100];
	char t[100];
	int i,c;
	for (i = 0; (c = getchar()) != EOF; ++i)
		t[i] = c;
	t[++i] = '\0';
	i = 0;
	while (t[i] != '\0') {
		switch (t[i]) {
		case '\n':
			s[i] = '\\';
			s[++i] = 'n';
			++i;
			break;
		case '\t':
			s[i] = '\\';
			s[++i] = 't';
			++i;
			break;
		default:
			s[i] = t[i];
			++i;
			break;	
		}
	}
	s[++i] = '\0';
	printf("%s\n",s);
}
