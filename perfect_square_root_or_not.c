#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    int ival;
    float fval;
    scanf("%d",&num);
    ival=sqrt(num);
    fval=sqrt(num);
    if(ival==fval)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}