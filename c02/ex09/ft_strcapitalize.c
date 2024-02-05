/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:21:26 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/23 16:23:52 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_uptolow(char	*str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z' && str[i - 1] != ' ')
	{
		if (str[i - 1] >= '0' && str[i - 1] <= '9')
			str[i] += 32;
		else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			str[i] += 32;
		else if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
			str[i] += 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[0] -= 32;
	i++;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		else if (!(str[i] >= '0' && str[i] <= '9')
			&& !(str[i] >= 'A' && str[i] <= 'Z')
			&& !(str[i] >= 'a' && str[i] <= 'z'))
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		ft_uptolow(str, i);
		i++;
	}
	return (str);
}

/*int	main()
{
	char	a[] = "saLut, comment tu  vas ? 42mots Quar~ante-deux; cinquante+++et+U";
	printf("%s\n", ft_strcapitalize(a));
}*/
