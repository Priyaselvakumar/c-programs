#include<stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    float s;
    float x;
    scanf("%f",&s);
    x=(s*5)/18;
   
    if(x==roundf(x))
    {
       printf("%.0f",x);
    }
    else
    {
        printf("%.2f",floor(100*x)/100);
    }
    

}
