/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:17:49 by jmartini          #+#    #+#             */
/*   Updated: 2020/12/11 17:43:52 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *tofind)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	if (tofind[i] == 0)
		return (str);
	while (str[j] != '\0')
	{
		if (tofind[i] == str[j])
		{
			k = j;
			while (tofind[i] == str[k])
			{
				i++;
				k++;
				if (tofind[i] == '\0')
					return (&str[j]);
				if (str[k] == '\0')
					k = 0;
			}
		}
		j++;
	}
	return (0);
}

int		main(void)
{
	char str[] = "cacaneasd";
	char tofind[] = "cane";

	printf("%s\n", ft_strstr(str, tofind));
	printf("%s\n", strstr(str, tofind));
}
