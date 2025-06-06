/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@stuident.42.fr>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 22:26:13 by lenakach          #+#    #+#             */
/*   Updated: 2025/03/11 18:22:09 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_taille(char **strs, int size, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		if (i < size - 1)
			len = len + ft_strlen(sep);
		i++;
	}
	return (len + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int			i;
	char		*dest;

	if (size <= 0)
	{
		dest = malloc(sizeof(char));
		*dest = 0;
		return (dest);
	}
	dest = malloc(sizeof(char) * ft_taille(strs, size, sep));
	if (!dest)
		return (NULL);
	*dest = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}			

/*int	main(void)
{
	char	*strs[] = {"", "Le", "Sang"};
	char	*sep = "OLA";
	char	*res = ft_strjoin(3, strs, sep);

	if (res != NULL)
	{
		printf("Résultat : %s\n", res);
		free(res);
    	}
	else
		printf("Erreur");
	return (0);
}*/
