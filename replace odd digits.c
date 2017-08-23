#include<stdio.h>

int main()
{
    int i,a[100],t;
    int count=0,k=0,h=0;
    long int n;
    scanf("%ld",&n);
   
    while(n)
    {
        t=n%10;
        n=n/10;
        if(t%2==0)
        {
            a[k]=t;
            k++;
        }
        else
        {
        count++;
        }
        h++;
    }
   
    if(h==count)
    {
    for(i=(k-1);i>=0;i--)
    {
        printf("%d",a[i]);
    }
    }
    else
    {
        printf("-1");
    }
    if(k==0)
    {
        printf("-1");
    }
}
