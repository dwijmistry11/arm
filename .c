#include<stdio.h>

void main()
{
    int n, on, res,rem;
    scanf("%d",&n);
    on=n;
    
    while(on!=0)
    {
        rem=on%10;
        res+=res*res*res;
        on/=10;
    }//while
    
    if(res==n)
    {
        printf("Yes");
    }//if
    else
    {
        printf("no");
    }//else
}//main
