/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 09:18:04 by jfontbon          #+#    #+#             */
/*   Updated: 2025/04/03 10:35:56 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char src[] = "test";
	char dest[5];

	char *srcptr = src;
	char *destptr = dest;
	printf("dest before: %s\n", dest);
	destptr = ft_strcpy(destptr, srcptr);
	printf("dest after: %s\n", dest);
	return (0);
}*/
