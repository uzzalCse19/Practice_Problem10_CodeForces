#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    long long int p=0,s=0;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==j) p+=arr[i][j];
            if(i+j==n-1) s+=arr[i][j];
        }
    }
   if((p-s)<0) printf("%lld\n",(p-s)*-1);
   else printf("%lld\n",(p-s));
    return 0;
}