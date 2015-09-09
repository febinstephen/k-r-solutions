#include<stdio.h>
#define LOWER  0
#define UPPER 300 
#define STEP 20

int  ftoc(int f)
{
	int c; 
	c = (f - 32.0) * ( 5.0/9.0 );
	return c;
}
main()
{
	int f;	   
	for ( f = LOWER; f <= UPPER; f += STEP ) 
	printf("%4d : %4d  \n",f,ftoc(f));
	return 0;
}
