/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:04:38 by lenakach          #+#    #+#             */
/*   Updated: 2025/03/03 19:28:41 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	strl(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = strl(src);
	i = 0;
	if (size == 0)
		return (strl(src));
	while (i < size - 1 && src[i])
	{	
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/*int	main(void)
{
	char	src[] = "GUYebjekjwbS";
	char	dest[] = "";

	printf("%d", ft_strlcpy(dest, src, 5));
	printf(strlcpy(dest, src, 5));
	return (0);
}*/
