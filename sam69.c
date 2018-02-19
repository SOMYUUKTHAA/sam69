#include<stdio.h>
void main()
{
    int a,b,res;
    printf("\nenter two values\n");
    scanf("%d%d",&a,&b);
    res=a-b;
    if(res%2==0)
    {
        printf("\neven");
    }
    else
    {
        printf("\nodd");
    }
}
