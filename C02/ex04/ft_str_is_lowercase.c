/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 10:59:47 by jfontbon          #+#    #+#             */
/*   Updated: 2025/04/08 17:38:53 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	is_lower;
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			is_lower = 1;
		}
		else
		{
			is_lower = 0;
			break ;
		}
		i++;
	}
	return (is_lower);
}

/*int	main(void)
{
	char	mystr[] = "test";
	char	*mystrptr = mystr;
	int	result;
	result = ft_str_is_lowercase(mystrptr);
	result = (result % 10) + '0';
	write(1, &result, 1);
	write(1, "\n", 1);
	return (0);
}*/
