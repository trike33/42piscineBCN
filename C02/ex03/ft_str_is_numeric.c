/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 10:52:12 by jfontbon          #+#    #+#             */
/*   Updated: 2025/03/31 10:58:21 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_numeric;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= '9' && str[0] >= '0')
		{
			is_numeric = 1;
		}
		else
		{
			is_numeric = 0;
			break ;
		}
		i++;
	}
	return (is_numeric);
}

/*int	main(void)
{
	char 	str[] = "123";
	char 	*strptr = str;
	int	result;

	result = ft_str_is_numeric(strptr);
	result = (result % 10) + '0';
	write(1, &result, 1);
	write(1, "\n", 1);
	return (0);
}*/
