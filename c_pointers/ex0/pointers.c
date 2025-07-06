#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div = *a / *b;
	int mod = *a % *b;
	*a = div;
	*b = mod;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int i = 0;
	while(i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		j = 0;
		i++;
	}
}

void main(){
	int arr[3] = {9, 2, 3};
	ft_sort_int_tab(arr,3);
	printf("[1] = %d\t[2] = %d\t[3] = %d\n",arr[0],arr[1],arr[2]);
}
