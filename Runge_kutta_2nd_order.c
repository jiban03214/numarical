#include<stdio.h>

#define f(x,y) (-x*y)

int main()
{
	float x0,y0,xn,h,yn,k1,k2,k;
	int i,n;
	printf("::2nd order Runge-Kutta Method::\n");
	printf("-----------------------------------\n");
	printf("Enter initial condition\n");
	printf("x0 = ");
	scanf("%f",&x0);
	printf("y0 = ");
	scanf("%f",&y0);
	printf("Enter calculation point xn = ");
	scanf("%f",&xn);
	printf("Enter the number of steps = ");
	scanf("%d",&n);

	h=(xn-x0)/n;

	printf("x0\ty0\tyn\n");
	for(i=0;i<n;i++)
	{
		k1=h*(f(x0,y0));
		k2=h*(f((x0+h),(y0+k1)));
		k=(k1+k2)/2;
		yn=y0+k;
		printf("%0.4f\t%0.4f\t%0.4f\n",x0,y0,yn);
		x0=x0+h;
		y0=yn;
	}

	printf("\nAt x = %0.2f the value of y = %0.3f\n",xn,yn);
	return 0;
}


















