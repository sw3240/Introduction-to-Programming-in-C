#include <stdio.h>
#include <stdlib.h>

double pi = 3.14;
double diameter(double r)
{
	return(2 * r);
}
double circumference(double r)
{
	return(2 * 3.14 * r);
}
double area(double r)
{
	return(3.14 * r * r);
}

int main(int argc, char *argv[])
{
	double r = atof(argv[1]);
	double d = 0.0;
	double c = 0.0;
	double a = 0.0;
	
	d = diameter(r);
	c = circumference(r);
	a = area(r);
	
	printf("d = %f, c = %f, a = %f\n", d, c, a);
	return 0;
}
