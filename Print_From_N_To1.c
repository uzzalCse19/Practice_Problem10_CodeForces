#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void fun(int n)
{
    printf("%d",n);
    if(n!=1) printf(" ");
    if(n==1) return ;
    fun(n-1);

}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}