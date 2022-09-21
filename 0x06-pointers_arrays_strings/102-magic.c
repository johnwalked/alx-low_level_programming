#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;

<<<<<<< HEAD
  p[5] = 98;
/* ...so that this prints 98\n */
=======
  *(p + 5) = 98;

>>>>>>> 6e1a3a93a039d32e3a890ce2790afe8070543236
  printf("a[2] = %d\n", a[2]);
  return (0);
}
