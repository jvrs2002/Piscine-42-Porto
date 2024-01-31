/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:40:23 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/31 11:07:59 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*nbrs;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	nbrs = malloc(sizeof(int *) * i);
	if (nbrs == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = nbrs;
	i = 0;
	while (min < max)
	{
		nbrs[i] = min;
		min++;
		i++;
	}
	return (i);
}
