#include<stdio.h>
#include<math.h>
#define f(x) x*x*x-4*x+1
#define df(x) 3*x*x-4

int main()
{
    float x0,x1,x,xn,fn,f0,f1,fx,dfx,e;
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

    if(abs(f0)<abs(f1))
    {
        x=x0;
    }
    else
    {
        x=x1;
    }

    printf("\nn\tx\t\tf(x)\t\txn\t\tf(xn)\n");
    printf("-------------------------------------------------------------------\n");
    do
    {
        fx=f(x);
        dfx=df(x);
        xn=x-(fx/dfx);
        fn=f(xn);
        printf("%d\t%f\t%f\t%f\t%f\n",n,x,fx,xn,fn);
        x=xn;
        n+=1;
    }while(fabs(fn)>e);
    printf("-------------------------------------------------------------------\n");
    printf("\nThe root = %f\n",xn);
    return 0;
}
