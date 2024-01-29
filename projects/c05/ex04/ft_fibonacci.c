/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:12:59 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/29 18:13:04 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index >= 0)
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_fibonacci(10));
}*/