/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 10:13:07 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/30 13:53:12 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int a, int b, int c, int d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != '9' | b != '8' | c != '9' | d != '9')
		write(1, ", ", 2);
}

void	ft_part1(int a, int b, int c, int d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_write(a, b, c, d);
					d++;
				}
				c++;
				d = '0';
			}
			b++;
			c = a;
			d = b + 1;
		}
		a++;
		c++;
		b = '0';
		d = '1';
	}
}

void	ft_print_comb2(void)
{
	ft_part1('0', '0', '0', '1');
}

/*int	main(void)
{
	ft_print_comb2();
}*/
