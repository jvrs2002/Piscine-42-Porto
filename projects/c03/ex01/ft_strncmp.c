/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:45:26 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/22 21:06:06 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1) && s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	s1[] = "Bananaf";
	char	s2[] = "Ban";
	char	s3[] = "Bananad";
	char	s4[] = "Uma Banana";

	printf("%i\n", ft_strncmp(s1, s2, 4)); //Positivo
	printf("%i\n", ft_strncmp(s1, s3, 4)); //Igual
	printf("%i\n", ft_strncmp(s1, s4, 1)); //Negativo
}*/
