#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;

	char c1 = (*nbr / 10) + '0';
	char c2 = (*nbr % 10) + '0';
	//write(1, &c1, 1);
	//write(1, &c2, 1);
	//write(1, "\n", 1);
}

int	main(void)
{
	int i = 0;
	int *ptr = &i;
	ft_ft(ptr);
	return(0);
}
