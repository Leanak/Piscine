/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 20:24:11 by lenakach          #+#    #+#             */
/*   Updated: 2025/03/11 18:20:53 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (!(*range))
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

/*int     main(void)
{
        int     i;
        int     min; //Correspond a notre valeur min
        int     max; //Correspond a notre valeur max
	
	min = -10;
        max = 50;
        i = 0;
        
        int     *range;
	printf("%d", ft_ultimate_range(&range, min, max));
	return (0);
	
}*/
