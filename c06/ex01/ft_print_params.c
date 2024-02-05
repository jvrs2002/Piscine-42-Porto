/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:34:51 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/30 13:51:39 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *av)
{
	int	i;

	i = 0;
	while (av[i] != '\0')
	{
		write (1, &av[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_print_params(av[i]);
		write (1, "\n", 1);
		i++;
	}
}
