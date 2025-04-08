#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	i = 0;
	int tmp = start;
	while (start <= end)
	{
		i++;
		start++;
	}
}

int	main(void)
{
	int	start = 0;
	int	end = 3;
	int *array = ft_range(start, end);
	return (0);
}
