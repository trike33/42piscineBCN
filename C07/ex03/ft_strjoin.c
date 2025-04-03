/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 12:14:14 by jfontbon          #+#    #+#             */
/*   Updated: 2025/04/03 12:25:14 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	return (j);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr1;
	int		i;
	char	result[size];

	i = 0;
	while (i <= size)
	{
		if (ft_strlen(*strs[i]) > 1)
		{
			
		}
		else
		{
			result[i] = *strs[i];
		}
		i++;
	}
	
}

int	main(void)
{
	char *strings[] = {
        "Hello",
        "World",
        "This",
        "is",
        "C"
    };
	char sep[] = " ";
	int size = 22;
	char **result = ft_strjoin(size, &strings, sep);
	return (0);
}
