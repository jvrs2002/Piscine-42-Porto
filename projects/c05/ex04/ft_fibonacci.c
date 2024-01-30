/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:12:59 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/30 13:51:50 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index >= 0)
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	else
		return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_fibonacci(-10));
}*/
