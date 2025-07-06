#include <stdio.h>

int ft_iterative_factorial(int nb)
{
  int result = 1;
  while (nb)
  {
    result*=nb;
    nb--;
  }
  return result;
}

int ft_recursive_factorial(int nb)
{
  if (nb == 0) return 1;
  else return nb * ft_recursive_factorial(nb - 1);
}

int ft_iterative_power(int nb, int power)
{
  int result = 1;
  while(power--)
  {
    result*=nb;
  }
  return result;
}

int ft_recursive_power(int nb, int power)
{
  if (power<1) return 1;
  return nb * ft_recursive_power(nb, power -1);
}

int ft_fibonacci(int index)
{
  if (index <=0 ) return 0;
  else if (index == 1) return 1;
  else return ft_fibonacci(index-1)+ft_fibonacci(index - 2);
}

void main(){
  printf("%d\n",ft_fibonacci(6));
}

