/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:01:41 by lenakach          #+#    #+#             */
/*   Updated: 2025/03/11 20:58:21 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char		*dest;
	int			len;

	len = ft_strlen(src);
	dest = (char *) malloc(sizeof (char) * (len + 1));
	if (!dest)
		return (NULL);
	else
		return (ft_strcpy(dest, src));
}

/*int	main(void)
{
	printf("%s", ft_strdup("Hey comment ca va"));
	return (0);
}*/	
