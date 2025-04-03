/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 11:22:21 by jfontbon          #+#    #+#             */
/*   Updated: 2025/04/03 19:40:18 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '+' || str[i] == '-')
		{
			if (str[j] >= 'a' && str[j] <= 'z')
			{
				str[j] -= 32;
			}
			j = i + 1;
		}
		i++;
	}
	if (str[j] >= 'a' && str[j] <= 'z')
	{
		str[j] -= 32;
	}
	return (str);
}

int	main(void)
{
	char	mystr[] = "hello-world, this+test";
	char	*mystrptr = mystr;
	char	*result;
	result = ft_strcapitalize(mystrptr);
	return (0);
}
