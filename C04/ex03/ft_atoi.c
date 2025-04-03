/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 10:23:39 by jfontbon          #+#    #+#             */
/*   Updated: 2025/04/03 19:56:39 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	j;

	sign = 1;
	j = 0;
	while (*str == ' ' || *str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign = -sign;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		j = j * 10 + (*str - '0');
		str++;
	}
	return (j * sign);
}

/*int	main(void)
{
	char	mystr[] = "  ---+--+1234ab567";
	int	result = ft_atoi(mystr);
	printf("%i\n", result);
	return (0);
}*/
