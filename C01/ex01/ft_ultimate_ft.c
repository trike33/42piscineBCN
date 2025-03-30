/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 15:38:05 by jfontbon          #+#    #+#             */
/*   Updated: 2025/03/30 15:45:21 by jfontbon         ###   ########.fr       */
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

int	main(void)
{
	/*int	i;
	int	*ptr1;
	int	**ptr2;
	int	***ptr3;
	int	****ptr4;
	int	*****ptr5;
	int	******ptr6;
	int	*******ptr7;
	int	********ptr8;
	int	*********ptr9;

	i = 0;
	*ptr1 = &i;
	**ptr2 = &ptr1;
	***ptr3 = &ptr2;
	****ptr4 = &ptr3;
	*****ptr5 = &ptr4;
	******ptr6 = &ptr5;
	*******ptr7 = &ptr6;
	********ptr8 = &ptr7;
	*********ptr9 = &ptr8;
	ft_ultimate_ft(ptr9);*/
	return (0);
}
