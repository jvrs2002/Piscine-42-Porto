/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:30:03 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/22 11:42:27 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32)
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main()
{
	char	a[] = "dad";
	char	b[] = "teste i12";
	char	*c;

	c = "teste\t";

	printf("%i", ft_str_is_alpha(a));
	printf("%i", ft_str_is_alpha(b));
	printf("%i", ft_str_is_alpha(c));
}*/
