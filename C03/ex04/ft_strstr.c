/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:32:25 by jfontbon          #+#    #+#             */
/*   Updated: 2025/03/31 18:32:45 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	char	*h;
	char	*n;

	if (!to_find)
	{
		return (str);
	}
	while (*str)
	{
		h = str;
		n = to_find;
		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (!*n)
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}

/*int		main(void)
{
	char	mystr[] = "justforfun";
	char	to_find_test[] = "fun";
	char	*result = ft_strstr(mystr, to_find_test);
	return (0);
}*/
