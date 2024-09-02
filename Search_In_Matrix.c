#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n,m;
    long long int p=0,s=0;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0; i<n; i++)
    {

        for(int j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);

        }
    }
    int x,flag=1;
    scanf("%d",&x);
     for(int i=0; i<n; i++)
    {

        for(int j=0; j<m; j++)
        {
           if(arr[i][j]==x)
           {
               flag=0;
               break;
           }

        }
    }
    if(flag==0) printf("will not take number\n");
    else printf("will take number\n");
    return 0;
}