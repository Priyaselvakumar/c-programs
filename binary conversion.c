/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int n, a[100], i = 0, count = 0;
  scanf ("%d", &n);

  while (n != 0)
    {
      a[i] = n % 2;
      n = n / 2;
      i++;
      count++;

    }

  for (i = count - 1; i >= 0; i--)
    {
      printf ("%d", a[i]);
    }
}
