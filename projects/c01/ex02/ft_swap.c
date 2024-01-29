/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:38:20 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/16 19:56:29 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	temp;
	int	a = 2002;
	int	b = 1981;
	int	*aa = &a;
	int	*bb = &b;
	
	printf("Value of A before swap: %d\n\n", a);
	printf("Value of B before swap: %d\n\n", b);

	ft_swap(aa, bb);
	
	printf("Value of A after swap: %d\n\n", a);
	printf("Value of B after swap: %d\n\n", b);
}*/
