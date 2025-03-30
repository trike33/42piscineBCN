/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 15:45:45 by jfontbon          #+#    #+#             */
/*   Updated: 2025/03/30 15:50:22 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;
	//char	c1;
	//char	c2;
	temp = *a;
	*a = *b;
	*b = temp;
	/*c1 = (*a % 10) + '0';
	c2 = (*b % 10) + '0';
	write(1, "a=", 2);
	write(1, &c1, 1);
	write(1, "b=", 2);
	write(1, &c2, 1);
	write(1, "\n", 1);*/
}

int	main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	a = 0;
	b = 1;
	*ptrA = &a;
	*ptrB = &b;
	ft_swap(ptra, ptrb);
	return (0);
}
