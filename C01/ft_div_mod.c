/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 15:51:28 by jfontbon          #+#    #+#             */
/*   Updated: 2025/03/30 16:02:07 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	//char	c1;
	//char	c2;

	*div = a / b;
	*mod = a % b;
	/*c1 = (*div % 10) + '0';
	c2 = (*mod % 10) + '0';
	write(1, "div=", 4);
	write(1, &c1, 1);
	write(1, "\n", 1);
	write(1, "mod=", 4);
	write(1, &c2, 1);
	write(1, "\n", 1);*/
}

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	*div;
	int	*mod;

	a = 4;
	b = 2;
	div = &c;
	mod = &d;
	ft_div_mod(a, b, div, mod);
	return (0);
}
