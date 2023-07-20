#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the number of unknown variables:- ");
    scanf("%d",&n);
    float a[n][n+1],sol[n],r,sum;

    printf("Enter the augmented matrix::\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<j)
            {
                r=a[j][i]/a[i][i];
                for(k=0;k<n+1;k++)
                {
                    a[j][k]-=a[i][k]*r;
                }
            }
        }
    }

    sol[n-1]=a[n-1][n]/a[n-1][n-1];
    for(i=n-2;i>=0;i--)
    {
        sum=0;
        for(j=i+1;j<n;j++)
        {
            sum+=a[i][j]*sol[j];
        }
        sol[i]=(a[i][n]-sum)/a[i][i];
    }
    printf("\nThe result::\n");
    for(i=0;i<n;i++)
    {
        printf("%0.3f\t",sol[i]);
    }
    printf("\n");
    return 0;
}
