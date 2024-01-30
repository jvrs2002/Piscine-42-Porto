/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:05:57 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/30 13:52:17 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	n;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	n = s1[i] - s2[i];
	return (n);
}

/*int	main(void)
{
	char	s1[] = "Banana";
	char	s2[] = "Ban";
	char	s3[] = "Banana";
	char	s4[] = "Uma Banana";

	printf("%i\n", ft_strcmp(s1, s2)); //Positivo
	printf("%i\n", ft_strcmp(s1, s3)); //Igual
	printf("%i\n", ft_strcmp(s1, s4)); //Negativo
}*/
