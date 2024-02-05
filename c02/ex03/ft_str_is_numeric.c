/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:55:55 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/21 20:30:37 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
		i++;
	}
	return (1);
}

/*int	main()
{
	char	a[] = "0 1 2 H";
	char	b[] = "012345679";
	char	c[] = "SAD";

	printf("%i", ft_str_is_numeric(a));
	printf("%i", ft_str_is_numeric(b));
	printf("%i", ft_str_is_numeric(c));
}*/
