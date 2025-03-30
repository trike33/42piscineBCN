/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:06:33 by jfontbon          #+#    #+#             */
/*   Updated: 2025/03/30 16:15:28 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	//char	c1;
	//char	c2;
	*a = *a / *b;
	*b = *a % *b;
	/*c1 = (*a % 10) + '0';
	c2 = (*b % 10) + '0';
	write(1, "a=", 2);
	write(1, &c1, 1);
	write(1, "\n", 1);
	write(1, "b=", 2);
	write(1, &c2, 1);
	write(1, "\n", 1);*/
}

int	main(void)
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
}
