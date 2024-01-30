/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:47:12 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/30 13:52:24 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char	*dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	n = ft_strlen(dest);
	i = 0;
	if (nb == 0)
		return (dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[i + n] = src [i];
		i++;
	}
	dest[n + i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[] = "Hello ";
	char	src[] = "World";

	printf ("%s", ft_strncat(dest, src, 3));
}*/
