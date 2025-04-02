/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 11:20:51 by jfontbon          #+#    #+#             */
/*   Updated: 2025/04/02 11:28:45 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
	{
		return (0);
	}
	else if (power == 0 && nb == 0)
	{
		return (1);
	}
	else
	{
		result = nb;
		while (power > 1)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
}

/*int	main(void)
{	
	int	i = 0;
	int	j = 0;
	printf("%i\n", ft_iterative_power(i, j));
	return (0);
}*/
