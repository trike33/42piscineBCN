/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 18:04:06 by jfontbon          #+#    #+#             */
/*   Updated: 2025/04/05 18:20:49 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	j;

	j = 0;
	if (size > 0)
	{
		while (j < size && src[j] != '\0')
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (ft_strlen(src));
}

/*int	main(void)
{
	char 	dest[10];
	int	size = 5;
	unsigned int copied = ft_strlcpy(dest, "Hola mundo", size);
	printf("dest: %s\n", dest);
	printf("Longitud de src: %i\n", copied);
	return (0);
}*/
