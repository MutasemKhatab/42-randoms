#include<stdio.h>
#include<unistd.h>

int	main(void)
{
	char	*s;

	s = "wtf";
	s += 1;
	write(1,s,1);
	return (0);
}
