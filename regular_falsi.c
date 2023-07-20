#include<stdio.h>
#include<math.h>
#define f(x) x*x*x-4*x+1

int main()
{
    float x0,x1,x2,f0,f1,f2,e;
    int n=1;
    while(1)
    {
        printf("Enter two initial guesses::\n");
        scanf("%f%f",&x0,&x1);
        f0=f(x0);
        f1=f(x1);
        if(f0*f1<0)
            break;
        else
            printf("Invalid Guesses!\n");
    }
    printf("Enter tolerable error:- ");
    scanf("%f",&e);
    printf("n\tx0\tx1\tx2\tf(x2)\n");
    do
    {
        x2=(x0*f1-x1*f0)/(f1-f0);
        f2=f(x2);
        printf("%d\t%f\t%f\t%f\t%f\n",n,x0,x1,x2,f2);
        if(f0*f2<0)
        {
            x1=x2;
            f1=f2;
        }
        else
        {
            x0=x2;
            f0=f2;
        }
        n+=1;
    }while(fabs(f2)>e);
    printf("\nThe root = %f\n",x2);
    return 0;
}
