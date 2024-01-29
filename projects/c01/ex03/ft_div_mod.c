/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:56:40 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/15 18:53:23 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a = 10;
	int	b = 3;
	
	int	tempdiv;
	int	tempmod;

	ft_div_mod(a, b, &tempdiv, &tempmod);
	printf("The value of the division is: %i\n\n", tempdiv);
	printf("The value of the rest is: %i\n\n", tempmod);
}*/