/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 12:23:47 by lenakach          #+#    #+#             */
/*   Updated: 2025/03/11 11:41:54 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i ++;
	if (i < 2)
		return (0);
	return (i);
}

int	ft_base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if ((base[i] == '-' || base[i] == '+')
			|| (base[i] <= 13 && base[i] >= 9))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_find(char str, char *base)
{
	int	j;

	j = 0;
	while (base[j])
	{
		if (str == base[j])
			return (j);
		j++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	res;
	int	base_len;

	base_len = ft_base_len(base);
	i = 0;
	res = 0;
	sign = 1;
	if (ft_base_check(base) == 0)
		return (0);
	while ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (ft_find(str[i], base) != -1)
	{
		res = res * base_len + (ft_find(str[i], base));
		i++;
	}
	return (res * sign);
}

/*int	main(void)
{
	char	str[] = "123A";
	char	base[] = "123456789A";
	printf("%d\n", ft_atoi_base(str, base));
	return (0);
}*/
