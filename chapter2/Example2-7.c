#include<stdio.h>

unsigned invert(unsigned x, int p, int n);

main()
{
	unsigned x;
	int p,n;
	x = 8;
	p = 5;
	n = 2;
	printf("%d\n",invert(x,p,n));
}

unsigned invert(unsigned x, int p, int n)
{
	return x ^ (~(~0 << n) << (p+1-n));
}
