/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 15:26:15 by lenakach          #+#    #+#             */
/*   Updated: 2025/03/03 10:26:54 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	ft_check(char c)
{
	if (!((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A')
			|| (c <= '9' && c >= '0')))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	while (str[i])
	{
		if ((str[i] <= 'z' && str[i] >= 'a') && (str[i] == str[0]))
			str[i] = str[i] - 32;
		if ((ft_check(str[i]) == 0) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "salut comment tu vas ? 42mots quarente-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
