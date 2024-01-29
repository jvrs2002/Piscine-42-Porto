/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:02:18 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/16 12:23:30 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int	i;
	int	j;
	int	*a;
	int	*b;
	i = 10;
	j = 3;
	a = &i;
	b = &j;

	ft_ultimate_div_mod(a, b);

	printf("The result of the division is: %i\n\n", i);
	printf("The result of the rest is: %i\n\n", j);
}*/