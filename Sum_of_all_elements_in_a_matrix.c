#include<stdio.h>
int main()
{
    int a,b,i,j,sume=0;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
            sume+=arr[i][j];
        }
    }
    printf("%d",sume);
}