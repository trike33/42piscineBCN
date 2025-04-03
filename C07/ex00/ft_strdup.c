/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:45:50 by jfontbon          #+#    #+#             */
/*   Updated: 2025/04/03 20:09:23 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;
	char	*start;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	copy = (char *)malloc(i + 1);
	if (!copy)
	{
		return (NULL);
	}
	start = copy;
	while (*src != '\0')
	{
		*copy = *src;
		src++;
		copy++;
	}
	*copy = '\0';
	return (start);
}

/*int	main(void)
{
	char	mystr[] = "hello world!";
	char	*copy = ft_strdup(mystr);
	printf("mystr address before: %p, mystr = %s\n", (void *)mystr, mystr);
	printf("mystr address after: %p, copy = %s\n", (void *)copy, copy);
	return (0);
}*/
