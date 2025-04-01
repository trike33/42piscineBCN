/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:34:45 by jfontbon          #+#    #+#             */
/*   Updated: 2025/04/01 12:35:17 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	char	*ptr;

	i = 1;
	while (i < argc)
	{
		ptr = argv[argc - i];
		while (*ptr != '\0')
		{
			write(1, ptr, 1);
			ptr++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
