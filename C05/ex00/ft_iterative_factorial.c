/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:41:27 by lenakach          #+#    #+#             */
/*   Updated: 2025/03/08 15:46:46 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	j;

	i = nb;
	j = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (j < nb)
	{
		i = i * (nb - j);
		j++;
	}
	return (i);
}

/*int	main(void)
{
	printf("%d", ft_iterative_factorial(1));
	return (0);
}*/
