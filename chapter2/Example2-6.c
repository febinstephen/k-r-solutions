#include<stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

main()
{
	unsigned x;
	unsigned y;
	int p,n;
	x = 7;
	y = 8;
	p = 5;
	n = 3;
        printf("%d\n",~(~0 << n) << (p));	
}

unsigned setbits(unsigned x, int p, int n,unsigned y)
{
	return y & ~(~(~0 << n) << (p+1-n)) | (x & ~(~0 << n)) << (p+1-n);
}
