/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 09:31:54 by jfontbon          #+#    #+#             */
/*   Updated: 2025/03/31 10:38:15 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		write(1, "\0", 1);
		write(1, "\n", 1);
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = "te";
	char	dest[4];
	int	n = 4;
	char	*srcptr = src;
	char	*destptr = dest;
	destptr = ft_strncpy(destptr, srcptr, n);	
	return (0);
}*/
