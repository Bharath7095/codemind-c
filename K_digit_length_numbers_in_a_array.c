#include<stdio.h>
int main()
{
    int n,i,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a,count,c=0;
    for(i=0;i<n;i++)
    {
        count=0;
        a=arr[i];
        if(a==0)
        {
            count++;
        }
        while(a)
        {
            count++;
            a=a/10;
        }
        if(count==k)
        {
            c++;
        }
    }
    printf("%d",c);
}