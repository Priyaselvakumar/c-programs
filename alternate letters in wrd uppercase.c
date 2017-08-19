/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
{

    char a[100][100],temp;
    int i=0,j,count=0;
    while(temp!='\n')
    {
        scanf("%s%c",a[i],&temp);
        i++;
        count++;
    }
    for(i=0;i<count;i++)
    {
        for(j=0;j<strlen(a[i]);j++)
        {
            if(j%2==0)
            {
                printf("%c",toupper(a[i][j]));
            }
            else
            {
                printf("%c",tolower(a[i][j]));
            }
        }
        printf(" ");
    }
    


}


