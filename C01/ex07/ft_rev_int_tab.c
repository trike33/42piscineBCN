/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:38:35 by jfontbon          #+#    #+#             */
/*   Updated: 2025/03/31 08:16:17 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = size;
	while (i <= size)
	{
		k = tab[j];
		i++;
		j--;
	}
}

/*int	main(void)
{
	int	array[3];
	int	size;
	int	*ptr;

	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	size = 2;
	ptr = array;
	ft_rev_int_tab(ptr, size);
	return (0);
}*/
