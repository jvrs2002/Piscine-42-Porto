/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:22:06 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/30 13:51:51 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	if (power > 1)
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_recursive_power(4, 4));
	printf("%i\n", ft_recursive_power(4, -4));
	printf("%i\n", ft_recursive_power(0, 0));
}*/
