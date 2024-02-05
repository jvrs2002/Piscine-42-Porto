/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:52:03 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/30 13:51:46 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb <= 1)
		return (0);
	while (i < nb - 1)
	{
		i++;
		if (nb % i == 0)
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i", ft_is_prime(0));
}*/
