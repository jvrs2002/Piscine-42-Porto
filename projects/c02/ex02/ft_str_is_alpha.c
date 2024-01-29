/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:31:41 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/21 16:59:49 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'z')
			return (0);
		else if (str[i] > 'Z' && str[i] < 'a')
			return (0);
		i++;
	}
	return (1);
}

/*int	main()
{
	char	a[] = "Hell0";
	char	b[] = "Hello";
	char	c[] = "Hello!";

	printf("%i", ft_str_is_alpha(a));
	printf("%i", ft_str_is_alpha(b));
	printf("%i", ft_str_is_alpha(c));
}*/
