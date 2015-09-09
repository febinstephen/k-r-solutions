#include<stdio.h>

unsigned ritrot(unsigned x, int n);
int wordlength();

main()
{
	unsigned x = 7;
	int n = 3;
	printf("%d\n",ritrot(x,n));
}

unsigned ritrot(unsigned x, int n)
{
	int rbit; 
	while (n-- > 0) {
		rbit = (x & 1) << (wordlength() - 1);
		x = x >> 1;
		x = x | rbit;
	}
	return x;
}

int wordlength()
{
	int i;
	unsigned v = (unsigned) ~0;

	for (i = 1; (v = v >> 1) > 0; i++)
		;
	return i;
}
