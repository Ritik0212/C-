#include <stdio.h>
#include <math.h>
int main()
{
    int t,i;
    //printf("enter number of test cases=");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,j;
        //printf("enter n=");
        scanf("%d",&n);
        int a[n],a2[n],b1[n];
        for(j=0;j<n;j++)
        {
            //printf("enter a number=");
            scanf("%d",&a[j]);
            int k,a1=0,b=0,d=0,c=0;
            for(k=a[j];k>0;k=k/2)
            {
                int r = k%2;
                if(d<16&&r!=0)
                {
                    a1 += r*pow(2,d);
                }
                else if(d>15&&r!=0)
                {
                    b += r*pow(2,d-16);
                }
                d++;
            }
            a2[j]=a1;
            b1[j]=b;
        }
        printf("Case %d:\n",i+1);
        for(j=0;j<n;j++)
        {
            printf("%d ",a2[j]);
        }
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d ",b1[j]);
        }
        printf("\n");
    }
}
