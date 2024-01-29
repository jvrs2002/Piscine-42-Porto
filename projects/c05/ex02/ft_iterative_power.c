/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:39:46 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/29 09:55:54 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ini;

	ini = nb;
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || (power == 0))
		return (1);
	while (power > 1)
	{
		power--;
		nb *= ini;
	}
	return (nb);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_iterative_power(2, -1));
	printf("%i\n", ft_iterative_power(2, 3));
	printf("%i\n", ft_iterative_power(0, 2));
}*/
