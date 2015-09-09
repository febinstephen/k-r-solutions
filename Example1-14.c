#include<stdio.h>
#include<ctype.h>
#define MAXHIST 15 
#define MAXCHAR 128
main()
{
	int c,i;
	int len;
	int cf[MAXCHAR];
	int maxvalue;

	for ( i = 0; i < MAXCHAR; ++i )
		cf[i] = 0;
	while ((c = getchar()) != '\n' ) 
		if ( c < MAXCHAR )
			++cf[c]; 
	maxvalue = 0;
	for ( i = 1; i < MAXCHAR; ++i )
		if ( cf[i] > maxvalue ) 
			maxvalue = cf[i];
	for ( i = 0; i < MAXCHAR; ++i ) {
		if (isprint(i))
			printf("%5d  - %c - %5d : ",i,i,cf[i]);
		else
			printf("%5d -  -%5d",i,cf[i]);
		if ( cf[i] > 0 ) {
			if ((len = cf[i] * MAXHIST / maxvalue ) <= 0)	
				len = 1;		
		} else
			len = 0;
		while ( len > 0) {
			putchar('*');
			--len;
		}
		putchar('\n');
	}
}
		


