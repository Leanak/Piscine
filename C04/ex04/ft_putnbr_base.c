/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 19:19:34 by lenakach          #+#    #+#             */
/*   Updated: 2025/03/09 22:54:19 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_base_check(char *base)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (base[k])
	{
		if (base[k] == '+' || base[k] == '-')
			return (0);
		k++;
	}
	while (i != k)
	{
		j = i + 1;
		while (j != k)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (k);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_len;
	long int	nb;
	char		c;

	nb = nbr;
	base_len = ft_base_check(base);
	if (!(ft_base_check(base)))
		return ;
	if (base_len == 0 || base_len == 1)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= base_len)
		ft_putnbr_base((nb / base_len), base);
	c = base[nb % base_len];
	write(1, &c, 1);
}
/*int	main(void)
{
	
	ft_putnbr_base(-12456, "poneyvif");
	return (0);
}*/	
