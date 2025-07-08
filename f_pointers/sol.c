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

int	ft_is_sort(int *tab, int length, int (*f)(int,int))
{
	int	i;

	i = 0;
	while(i < length - 1)
	{
		if(!f(tab[i],tab[i+1]))
			return (0);
		i++;
	}
	return 1;			
}

int	to42(int x)
{
	return 42;
}

int main()
{
	int x[] = {1,2,3,4,5,6,7,8,9};

	int i =0;
	int *arr = ft_map(x,9,to42);
	while(i < 9)
	{
		printf("%d\t",arr[i]);
		i++;
	}


	//void (*func)(int*,int,void (*f)(int)) = &ft_foreach;
	//printf("%d",*func);
//	ft_foreach(x,9,ft_print);
	return (0);
}
