#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char* argv[])
{
    double r;
    r=atof(argv[1])/2;
    printf("%.2lf",roundf(3.14*r*r));
    return 0;
}
