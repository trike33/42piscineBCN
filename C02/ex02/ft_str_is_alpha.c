/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 10:39:30 by jfontbon          #+#    #+#             */
/*   Updated: 2025/04/08 17:30:20 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	is_letter;
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			return (1);
		}
		else
		{
			return (0);
		}
		i++;
	}
}

/*int	main(void)
{
	char	mystr[] = "test1";
	char	*mystrptr = mystr;
	int	result;
	result = ft_str_is_alpha(mystrptr);
	result = (result % 10) + '0';
	write(1, &result, 1);
	write(1, "\n", 1);
	return (0);
}*/
