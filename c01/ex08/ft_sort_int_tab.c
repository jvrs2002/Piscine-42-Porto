/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:02:03 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/17 21:02:15 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int	*a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	lim;

	lim = size - 1;
	while (lim > 0)
	{
		i = 0;
		while (i < lim)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
			}
			i++;
		}
		lim--;
	}
}

/*int main()
{
	int	i;
	int	num[] = {7, 2, 1, 4, 8, 0, 20};
	int	tamanho;

	tamanho = 7;
	i = 0;
	ft_sort_int_tab(num, tamanho);
	while (i != tamanho)
	{
		char	digito;

		digito = num[i] + '0';
		write(1, &digito, 1);
		write(1, " ", 1);
		write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
}*/
