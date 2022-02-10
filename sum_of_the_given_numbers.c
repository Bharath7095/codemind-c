#include<stdio.h>
int main()
{
    int s,j,sum;
    scanf("%d",&s);
    int a=2;
    int arr[s][a],i;
    for(i=0;i<s;i++)
    {
        for(j=0;j<a;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<s;i++)
    {
        sum=0;
        for(j=0;j<a;j++)
        {
            sum=sum+arr[i][j];
        }
        printf("%d
",sum);
    }
}