/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:51:45 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/30 13:51:48 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < (unsigned int)nb)
		i++;
	if (i * i == (unsigned int)nb)
		return (i);
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i", ft_sqrt(1));
}*/
