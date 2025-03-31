/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:08:22 by jfontbon          #+#    #+#             */
/*   Updated: 2025/03/31 17:30:55 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*buffer;
	int		i;

	i = 0;
	buffer = dest;
	while (*buffer != '\0')
	{
		buffer++;
		i++;
	}
	while (*src != '\0' && i <= nb)
	{
		*buffer = *src;
		buffer++;
		src++;
		i++;
	}
	if (i < nb)
	{
		*buffer = '\0';
	}
	return (dest);
}

/*int	main(void)
{
	int	j = 5;
	char	dest[10] = "hello";
	char	src[] = "world";
	char	*result = ft_strncat(dest, src, j);
	return (0);
}*/
