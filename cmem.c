#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i = 0;

	while (s[i])
		i++;
	return (i);
}

int	ft_total_strs_length(int size, char **strs)
{
	int	i = 0;
	int	j;
	int	total = 0;

	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			total++;
			j++;
		}
		i++;
	}
	return (total);
}

char	*ft_build_str(int size, char **strs, char *sep, int total_len)
{
	char	*str;
	int		i = 0, j = 0, k = 0;

	str = malloc(sizeof(char) * (total_len + 1));
	if (!str)
		return (0);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			str[k++] = sep[j++];
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		sep_len;
	int		strs_len;
	int		total_len;

	if (size == 0)
	{
		char *empty = malloc(1);
		if (empty)
			empty[0] = '\0';
		return (empty);
	}
	sep_len = ft_strlen(sep);
	strs_len = ft_total_strs_length(size, strs);
	total_len = strs_len + (sep_len * (size - 1));
	return (ft_build_str(size, strs, sep, total_len));
}