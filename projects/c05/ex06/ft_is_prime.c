int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i < nb - 1)
	{
		i++;
		if (nb % i == 0)
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i", ft_is_prime(0));
}*/
