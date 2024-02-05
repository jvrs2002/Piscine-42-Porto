/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:30:14 by joao-vri          #+#    #+#             */
/*   Updated: 2024/02/01 10:55:23 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	**str, char *sep, int size)
{
	int	i;
	int	n;
	int	j;

	n = 0;
	i = 0;
	j = 0;
	while (n < size)
	{
		while (str[n][i] != '\0')
			i++;
		n++;
		j += i - 1;
		i = 0;
	}
	i = 0;
	while (sep[i] != '\0')
		i++;
	j++;
	return (j + i * (size - 1));
}

char	*ft_ifnull(char *str, char *newstr)
{
	str = (char *)malloc(1);
	if (str == NULL)
		return (NULL);
	return (newstr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*newstr;

	newstr = 0;
	auto int i = 0, n = 0, j = 0;
	if (size == 0)
		return (ft_ifnull(NULL, newstr));
	i = ft_strlen(strs, sep, size);
	newstr = malloc(sizeof(char) * i);
	while (n < size)
	{
		i = -1;
		while (strs[n][++i] != '\0')
			newstr[j++] = strs[n][i];
		i = -1;
		while (sep[++i] != '\0' && j < ft_strlen(strs, sep, size))
			newstr[j++] = sep[i];
		n++;
	}
	newstr[j] = '\0';
	return (newstr);
}

/*#include <stdio.h>

int main()
{
	char *str[] = {"Hello", "World"};
	char *sep = "---";
	char *res = ft_strjoin(2, str, sep);
	
	printf("%s", res);

	free(res);

	return (0);
}*/
