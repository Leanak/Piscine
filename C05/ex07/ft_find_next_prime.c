/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:28:39 by lenakach          #+#    #+#             */
/*   Updated: 2025/03/08 16:45:26 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	result;

	i = 2;
	if (nb <= 2)
		return (2);
	while (i != nb)
	{
		if (i != nb && nb % i == 0)
		{
			result = ft_find_next_prime(nb + 1);
			return (result);
		}
		i++;
	}
	return (i);
}

/*int	main(void)
{
	printf("%d", ft_find_next_prime(1000000000));
	return (0);
}*/
