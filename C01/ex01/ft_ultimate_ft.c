#include <unistd.h>

void  ft_ultimate_ft(int *********nbr)
{
  *********nbr = 42;
  /*char c1 = (*********nbr / 10) + '0';
  char c2 = (*********nbr % 10) + '0';
  write(1, &c1, 1);
  write(1, &c2, 1);
  write(1, "\n", 1);*/
}

int  main(void)
{
  int i = 0;
  int *ptr1 = &i;
  int **ptr2 = &ptr1;
  int ***ptr3 = &ptr2;
  int ****ptr4 = &ptr3;
  int *****ptr5 = &ptr4;
  int ******ptr6 = &ptr5;
  int *******ptr7 = &ptr6;
  int ********ptr8 = &ptr7;
  int *********ptr9 = &ptr8;

  ft_ultimate_ft(ptr9);
  return (0);
}
