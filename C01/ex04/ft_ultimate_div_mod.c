/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:06:33 by jfontbon          #+#    #+#             */
/*   Updated: 2025/03/31 08:15:41 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	*a = *a / *b;
	*b = *a % *b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*c;
	int	*d;

	a = 4;
	b = 2;
	c = &a;
	d = &b;
	ft_ultimate_div_mod(c, d);
	return (0);
}*/
