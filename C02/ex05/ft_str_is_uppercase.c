/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 11:02:50 by jfontbon          #+#    #+#             */
/*   Updated: 2025/04/08 17:39:30 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	is_upper;
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			is_upper = 1;
		}
		else
		{
			is_upper = 0;
			break ;
		}
		i++;
	}
	return (is_upper);
}

/*int	main(void)
{
	char	mystr[] = "TEST";
	char	*mystrptr = mystr;
	int	result;
	result = ft_str_is_uppercase(mystrptr);
	result = (result % 10) + '0';
	write(1, &result, 1);
	write(1, "\n", 1);
	return (0);
}*/
