/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:09:13 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/30 16:38:53 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	n;
	int	*nbrs;

	if (min >= max)
		return (NULL);
	i = max - min;
	nbrs = (int *)malloc(sizeof(int) * i);
	i = min;
	n = 0;
	while (i < max)
	{
		nbrs[n] = i;
		i++;
		n++;
	}
	return (nbrs);
}

/*#include <stdio.h>

int	main(void)
{
	int	i;
	int	*range_result;
	
	range_result = ft_range(3, 10);
	i = 0;
	while (range_result[i] != '\0')
	{
		printf("%i\n", range_result[i]);
		i++;
	}
}*/
