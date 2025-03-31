/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:29:04 by jfontbon          #+#    #+#             */
/*   Updated: 2025/03/31 15:45:48 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while ((*s1 != '\0' && *s2 != '\0') && (*s1 == *s2))
	{
		if (i < n)
		{
			s1++;
			s2++;
			i++;
		}
		else
		{
			break ;
		}
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}

/*int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "help";
	int	i = 1;
	int	result = ft_strncmp(str1, str2, i);
	return (0);
}*/
