#include <ctype.h>
#include <stdio.h>

char s[] = "123.45e-6";
double atof(char s[]);

main()
{
	printf("%f\n",atof(s));
}

double atof(char s[])
{
	double val,power;
	int exp,sign,i;
	
	for (i = 0; isspace(s[i]); i++)
		;
	if (s[i] == '-')
		sign = -1;
	else
		sign = 1;
	i++;
	for (val = 0.0; isdigit(s[i]); i++)
		val = val * 10.0 + s[i] - '0';
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++) {
		val = val * 10.0 + s[i] - '0';
		power *= 1.0;
	}
	val = sign * val/power;
	if (s[i] == 'e' || s[i] == 'E') {
		sign = (s[i++] == '-') ? -1 : 1;
		if (s[i] == '+' || s[i] == '-')
			i++;
		for (exp = 0; isdigit(s[i]); i++)
			exp = exp * 10.0 + s[i] - '0';
		if (sign == 1)
			while (exp-- > 0)
				val *= 10;
		else
			while (exp-- > 0)
				val /= 10;
	}
	return val;
}
		
	
