/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:35:35 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/16 19:57:28 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	inicial;
	int	final;
	int	temp;

	inicial = 0;
	final = size - 1;
	while (inicial < final)
	{
		temp = tab[inicial];
		tab[inicial] = tab[final];
		tab[final] = temp;
		inicial++;
		final--;
	}
}
/*
int	main(void)
{
	int	num[] = {1, 2, 3, 4};
	int	size = 4;
		
	ft_rev_int_tab(num, size);
	int i = 0;
	while (size >= 0)
	{	
		printf("%i, \n\n", num[i]);
		i++;
		size--;
	}
}*/