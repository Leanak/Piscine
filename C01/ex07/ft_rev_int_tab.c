/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 20:05:48 by lenakach          #+#    #+#             */
/*   Updated: 2025/03/08 16:54:12 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		ft_swap(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}

/*int	main(void)
{
	int	tab[] = {0, 42, 34, 2, 5, 6, 90};
	ft_rev_int_tab(tab, 7);
	printf("%d - %d - %d - %d - %d - %d - %d", 
	tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6]);
	return (0);
}*/
