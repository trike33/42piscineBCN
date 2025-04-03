/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:38:35 by jfontbon          #+#    #+#             */
/*   Updated: 2025/04/03 10:01:14 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

/*int	main(void)
{
	int	array[3];
	int	size;

	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	size = 3;
	int	i = 0;
	while (i < 3)
	{
		printf("antes: %d\n", array[i]);
		i++;
	}
	ft_rev_int_tab(array, size);
	i = 0;
	while (i < 3)
	{
		printf("despues; %d\n", array[i]);
		i++;
	}
	return (0);
}*/
