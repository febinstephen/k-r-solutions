#include<stdio.h>
main(){
float cels,fahr;
float low,upper,step;
low = 0;
step = 20;
upper = 300;
cels = low;
printf("Celsious To Fahrenheit Table");
while (cels <= upper){
	fahr = (9.0/5.0) * (cels + 32.0);
	printf("%5.2f\t%5.2f\n",cels,fahr);
	cels += step;
}
}
