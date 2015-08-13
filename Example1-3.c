#include<stdio.h>
main()
{
float fahr,cels;
float low,upper,step;
low = 0;
upper = 300;
step = 20;
fahr = low;
printf("Fahrenheits To Celsious Table\n");
while(fahr <= upper){
	cels = (fahr-32.0) * (5.0/9.0);
	printf("%6.2f\t%6.2f	\n",fahr,cels); 
	fahr += step;	
}
}
