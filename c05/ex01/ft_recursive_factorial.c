/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:30:34 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/30 13:51:58 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb >= 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_recursive_factorial(4));
	printf("%i\n", ft_recursive_factorial(-3));
	printf("%i\n", ft_recursive_factorial(1));
	printf("%i\n", ft_recursive_factorial(1));
}*/
