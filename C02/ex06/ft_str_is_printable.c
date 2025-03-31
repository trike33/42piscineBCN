/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 11:07:53 by jfontbon          #+#    #+#             */
/*   Updated: 2025/03/31 11:09:03 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	is_print;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			is_print = 1;
		}
		else
		{
			is_print = 0;
			break ;
		}
		i++;
	}
	return (is_print);
}

/*int	main(void)
{
	char	mystr[] = "TEST?$";
	char	*mystrptr = mystr;
	int	result;
	result = ft_str_is_printable(mystrptr);
	result = (result % 10) + '0';
	write(1, &result, 1);
	write(1, "\n", 1);
	return (0);
}*/
