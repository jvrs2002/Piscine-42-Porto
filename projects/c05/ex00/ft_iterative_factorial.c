/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:55:53 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/28 12:29:40 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	result = nb;
	while (nb > 1)
	{
		nb -= 1;
		result *= nb;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_iterative_factorial(6));
	printf("%i\n", ft_iterative_factorial(-6));
	printf("%i\n", ft_iterative_factorial(0));
	printf("%i\n", ft_iterative_factorial(1));
}*/
