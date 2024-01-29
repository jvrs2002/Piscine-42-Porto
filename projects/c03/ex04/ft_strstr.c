/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:47:48 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/27 16:44:36 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	if (*to_find == '\0')
		return (str);
	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		while (str[i] == to_find[n])
		{
			i++;
			n++;
			if (to_find[n] == '\0')
				return (str + i - n);
			if (str[i] != to_find[n])
				i -= n;
		}
		n = 0;
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	str[] = "Abctestestextestex";
	char	to_find[] = "testex";

	printf("%s", ft_strstr(str, to_find));
}*/
