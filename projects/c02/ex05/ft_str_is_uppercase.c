/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 21:19:08 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/21 17:03:05 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

/*int	main()
{
	char	a[] = "";
	char	b[] = "sad121";
	char	c[] = "SAD";

	printf("%i", ft_str_is_uppercase(a));
	printf("%i", ft_str_is_uppercase(b));
	printf("%i", ft_str_is_uppercase(c));
}*/
