/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 12:06:54 by jfontbon          #+#    #+#             */
/*   Updated: 2025/03/20 12:07:09 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	i;
	char	j;
	char	s[5];

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			s[0] = (i / 10) + '0';
			s[1] = (i % 10) + '0';
			s[2] = ' ';
			s[3] = (j / 10) + '0';
			s[4] = (j % 10) + '0';
			write(1, s, 5);
			if (i != 98 || j != 99)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	write(1, "\n", 1);
	return (0);
}*/
