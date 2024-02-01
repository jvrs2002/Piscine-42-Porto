/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:47:48 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/30 13:52:27 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	if (str[0] == 0 && to_find[0] == 0)
		return (str);
	while (str[i] != '\0')
	{
		n = 0;
		while (to_find[n] != '\0' && str[i + n] == to_find[n])
			n++;
		if (to_find[n] == '\0')
			return (str + i);
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
