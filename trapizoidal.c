#include<stdio.h>
#include<math.h>
#define f(x) (x*exp(x*2))
int main()
{
	int i,n;
	float l,u,h,sum=0,midsum=0,result;
	printf("Trapezoidal Rule to find approximate definite integral.\n\n");
	printf("Enter the intervals:- ");
	scanf("%d",&n);
	printf("Enter the lower and upper limit::\n");
	scanf("%f%f",&l,&u);
	h=(u-l)/n;
	sum=f(l)+f(u);
	for(i=2;i<n;i++)
	{
		midsum=midsum+f(l+i*h);
	}
	sum=sum+2*midsum;
	result=(h/2)*sum;
	printf("\nThe approximate definite integral of x*e^2x = %f\n",result);
}

