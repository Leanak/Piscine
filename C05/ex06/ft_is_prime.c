/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:12:48 by lenakach          #+#    #+#             */
/*   Updated: 2025/03/08 16:46:58 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i != nb && nb % i != 0)
	{
		i++;
	}
	if (i == nb)
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_prime(11));
	return (0);
}*/
