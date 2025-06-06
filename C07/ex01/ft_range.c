/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:01:23 by lenakach          #+#    #+#             */
/*   Updated: 2025/03/11 20:59:20 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * (max - min));
	if (!(tab))
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

/*int	main(void)
{
	int	i;
	int	min; //Correspond a notre valeur min
	int	max; //Correspond a notre valeur max
	min = -1000000;
	max = 1000000;
	i = 0;	
	int	*tab = ft_range(min, max);

	while (tab[i] < max)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/
