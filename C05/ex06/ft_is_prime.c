/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:03:24 by jfontbon          #+#    #+#             */
/*   Updated: 2025/04/02 12:12:49 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	j;

	j = 2;
	while (j <= nb)
	{
		if (nb % j == 0 && j != nb)
		{
			return (0);
		}
		else if (nb % j == 0 && j == nb)
		{
			return (1);
		}
		j++;
	}
	return (0);
}

/*int	main(void)
{
	int	i = 5;
	printf("%i\n", ft_is_prime(i));
	return (0);
}*/
