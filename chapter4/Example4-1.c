#include<stdio.h>

int getindex(char s[], char t[]);

char s[] = "superstarteduper";
char t[] = "uper"; 

main()
{
	printf("%d\n",getindex(s,t));
}

int getindex(char s[], char t[])
{
	int i,j,k,pos;
	pos = 0;
	for (i = 0; s[i] != '\0'; i++) {
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++,k++)
			;
		if (t[k] == '\0' && k > 0)
			pos = i;
	}
	return pos; 
}	
