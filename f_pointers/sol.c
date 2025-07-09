#include <stdio.h>
#include <stdlib.h>

void ft_foreach(int *tab, int length, void(*f)(int))//DONE
{
	int	i;

	i = 0;
	while(i <length)
	{
		f(tab[i]);
		i++;
	}
}

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int *arr = malloc(sizeof(int) * length);
	int i = 0;
	while(i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return arr;
}

int	ft_any(char **tab,int(*f)(char*))
{
	int	i;

	i = 0;
	while(tab[i])
	{
		if(f(tab[i]))
			return 1;
		i++;
	}
	return 0;
}


int	ft_count_if(char **tab,int length,int(*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while(i < length)
	{
		if(f(tab[i]))
			count++;
		i++;
	}
	return count;
}

int	ft_is_sort_asc(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort_desc(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = length - 1;
	while (i > 0)
	{
		if((*f)(tab[i], tab[i - 1]) > 0)
			return (0);
		i--;
	}
	return (1);
}
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	return (ft_is_sort_asc(tab, length, f)
			||ft_is_sort_desc(tab, length, f));
}

int        ft_intcmp(int a, int b)
{
	return (a - b);
}

int main()
{
	int x[] = {9,8,7,6,6,4,3,2,1};
	int y[] = {1,2,3,4,4,6,7,8,9};
	int z[] = {9,8,3,4,0,0,7,20,9};

	printf("x = %d\n",ft_is_sort(x, 9, ft_intcmp));
	printf("y = %d\n",ft_is_sort(y, 9, ft_intcmp));
	printf("z = %d\n",ft_is_sort(z, 9, ft_intcmp));

	//void (*func)(int*,int,void (*f)(int)) = &ft_foreach;
	//printf("%d",*func);
	//	ft_foreach(x,9,ft_print);
	return (0);
}
