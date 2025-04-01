/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfontbon <jfontbon@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:22:09 by jfontbon          #+#    #+#             */
/*   Updated: 2025/04/01 12:27:48 by jfontbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*prog_name;

	prog_name = argv[0];
	while (*prog_name != '\0')
	{
		write(1, prog_name, 1);
		prog_name++;
	}
	write(1, "\n", 1);
	return (0);
}
