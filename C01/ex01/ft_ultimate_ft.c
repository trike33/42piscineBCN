/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 15:38:05 by jfontbon          #+#    #+#             */
/*   Updated: 2025/03/31 08:15:12 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	char	c1;
	char	c2;

	*********nbr = 42;
	c1 = (*********nbr / 10) + '0';
	c2 = (*********nbr % 10) + '0';
}

/*int	main(void)
{
	return (0);
}*/
