/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 11:52:30 by jfontbon          #+#    #+#             */
/*   Updated: 2025/04/03 20:07:13 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = min;
	*range = (int *)malloc((max - min) * 4);
	if (*range == NULL)
	{
		return (-1);
	}
	ptr = *range;
	while (i < max)
	{
		*ptr = i;
		i++;
		ptr++;
	}
	return (max - min);
}

/*int	main(void)
{
	int	min = 0;
	int	max	= 10;
	int	*range;
	int	size = ft_ultimate_range(&range, min, max);
	printf("size of range is(elements num): %i\n", size);
	while(min < max)
	{
		printf("%i\n", range[min]);
		min++;
	}
	return (0);
}*/
