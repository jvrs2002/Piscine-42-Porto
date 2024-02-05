/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 21:16:53 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/21 16:59:53 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}
/*int	main()
{
	char	a[] = "";
	char	b[] = "012345679";
	char	c[] = "sad";

	printf("%i", ft_str_is_lowercase(a));
	printf("%i", ft_str_is_lowercase(b));
	printf("%i", ft_str_is_lowercase(c));
}*/
