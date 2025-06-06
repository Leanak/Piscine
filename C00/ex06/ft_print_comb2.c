/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 13:42:49 by lenakach          #+#    #+#             */
/*   Updated: 2025/02/23 10:45:18 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(int a, int b)
{
	char	c;

	c = a / 10 + '0';
	write(1, &c, 1);
	c = a % 10 + '0';
	write(1, &c, 1);
	write(1, " ", 1);
	c = b / 10 + '0';
	write(1, &c, 1);
	c = b % 10 + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (98 >= a)
	{
		while (99 > b)
		{
			b++;
			if (a != b)
			{
				ft_putchar(a, b);
				if (a < 98)
					write(1, ", ", 2);
			}
		}
		b = a + 1;
	a++;
	}
}
