#include<stdio.h>
#include <stdlib.h>

int main()
{
int a[100],b[100],i=0,count=0;
float dis=0.0,tim=0.0;
char t='s';
while(t!='\n')
{
  scanf("%d@%d%c",&a[i],&b[i],&t); 
  dis=dis+a[i];
  tim=tim+b[i];
  i++;
}

printf("%.2f kmph",dis/tim);

}
