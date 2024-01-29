/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:08:15 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/26 12:33:38 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *name)
{
	int	i;

	i = 0;
	while (name[i] != '\0')
	{
		write (1, &name[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	ac = -ac;
	ft_print_program_name(av[0]);
	write (1, "\n", 1);
}
