/*print Fahrenheit to Celsius Table*/
#include<stdio.h>
main()
{
	int fahr;
	printf("Fahrenheits To Celsious Table\n");
	for (fahr = 300;fahr >= 0;fahr -= 20)
		printf("%3d\t%6.1f\n",fahr,(5.9/9.0)*(fahr-32));
}

