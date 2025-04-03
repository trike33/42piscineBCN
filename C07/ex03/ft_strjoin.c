/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 12:14:14 by jfontbon          #+#    #+#             */
/*   Updated: 2025/04/03 13:15:17 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	return (j);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		d;
	char	*result;

	result = (char *)malloc(size);
	i = 0; //traverse whole size
	j = 0; //traverse **strs args
	while (i < size)
	{
		d = 0; // traverse each **strs args
		while (d < ft_strlen(strs[j]))
		{
			result[i] = strs[j][d];
			d++;
			i++;
		}
		if (i < size - 1)
		{
			k = 0; //traverse each *sep arg
			while (sep[k] != '\0')
			{
				result[i] = sep[k];
				i++;
				k++;
			}
		}
		j++;
	}
	result[j] = '\0';
	return (result);
}

int	main(void)
{
	char *strings[] = {
        "Hello",
        "World",
        "This",
        "is",
        "C"
    };
	char sep[] = " ";
	int size = 25;
	char *result = ft_strjoin(size, strings, sep);
	printf("result %s\n", result);
	return (0);
}
