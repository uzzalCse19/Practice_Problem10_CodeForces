#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long int fun(int arr[],int n,int i,long long int sum)
{
    //int sum=0;
    if(i==n) return sum;
     sum+=arr[i];
    fun(arr,n,i+1,sum);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) scanf("%d",&arr[i]);
   long long int sum= fun(arr,n,0,0);
   printf("%lld\n",sum);
    return 0;
}