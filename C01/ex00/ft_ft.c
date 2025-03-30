/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 15:31:19 by jfontbon          #+#    #+#             */
/*   Updated: 2025/03/30 15:37:41 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ft(int *nbr)
{
	char	c1;
	char	c2;

	*nbr = 42;
	c1 = (*nbr / 10) + '0';
	c2 = (*nbr % 10) + '0';
}

int	main(void)
{
	int	i;
	int	*ptr;

	i = 0;
	*ptr = &i;
	ft_ft(ptr);
	return (0);
}
