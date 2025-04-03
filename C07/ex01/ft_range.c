/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:54:49 by jfontbon          #+#    #+#             */
/*   Updated: 2025/04/03 11:47:07 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*buffer;
	int	*start;

	if (min >= max)
	{
		return (NULL);
	}
	i = min;
	buffer = (int *)malloc((max - min) * 4);
	start = buffer;
	while (i < max)
	{
		*buffer = i;
		i++;
		buffer++;
	}
	return (start);
}

/*int	main(void)
{
	int	min = 0;
	int	max	= 10;
	int	*ptr = ft_range(min, max);
	while(min < max)
	{
		printf("%i\n", ptr[min]);
		min++;
	}
	return (0);
}*/
