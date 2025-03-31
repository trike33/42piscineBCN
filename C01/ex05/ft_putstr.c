/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:16:53 by jfontbon          #+#    #+#             */
/*   Updated: 2025/03/31 08:15:55 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

/*int	main(void)
{
	char	mystr[3];
	char	*ptr;

	mystr[0] = 'a';
	mystr[1] = 'b';
	mystr[2] = '\0';
	ptr = mystr;
	ft_putstr(ptr);
	return (0);
}*/
