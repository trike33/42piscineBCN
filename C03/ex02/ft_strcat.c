/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:33:54 by jfontbon          #+#    #+#             */
/*   Updated: 2025/03/31 13:55:29 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*buffer;
	
	buffer = dest;
	while (*buffer != '\0')
	{
		buffer++;
	}
	while (*src != '\0')
	{
		*buffer = *src;
		buffer++;
		src++;
	}
	*buffer = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[20] = "hello";
	char	dest[] = " world!";
	char	*final = ft_strcat(src, dest);
	return (0);
}*/
