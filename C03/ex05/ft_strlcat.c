/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:56:58 by jfontbon          #+#    #+#             */
/*   Updated: 2025/04/03 19:42:33 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;	

	i = 0;
	while (*dest != '\0')
	{
		dest++;
		i++;
	}
	while (*src != '\0' && i < size - 1)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	if (i == size - 1)
	{
		dest++;
		*dest = '\0';
	}
	return (size);
}

/*int		main(void)
{
	char	dest[10] = "Hello";
	char	src[] = "World!";
	int		size = 10;
	int		result = ft_strlcat(dest, src, size);
	printf("%s\n", dest);
	printf("%i\n", result);
	return (0);
}*/
