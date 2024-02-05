/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:34:39 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/30 13:51:41 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char *av)
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

	i = ac - 1;
	while (i != 0)
	{
		ft_rev_params(av[i]);
		write (1, "\n", 1);
		i--;
	}
}
