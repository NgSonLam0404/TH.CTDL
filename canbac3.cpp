#include <stdio.h>
#include <math.h>

float canbac3(float x)
{
	if(x==0)
		return 0;
	if(x<0)
		return (-canbac3(-x));
	return (exp((log(x)/3)));
}
int main ()
{
	float x;
	printf("nhap x");
	scanf ("%f",&x);
	x=canbac3(x);
	printf("ket qua la: %.2f",x);
	return 0;
}
	
