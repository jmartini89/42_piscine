/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:37:02 by jmartini          #+#    #+#             */
/*   Updated: 2020/12/07 20:10:28 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')//start check
	{
		str[i] = str[i] - 32;
		i++;
	}
	else
		i++;
	while (str[i] != '\0')
	{
		//if previous is not low.alphabet & current is low.alphabet, capitalize !!!NUMBERS!!!
		if (((str[i - 1] < 'a') && str[i - 1] > 'z') && (str[i] >= 'a' && str[i] <= 'z'))
		{	
			str[i] = str[i] - 32;
			i++;
		}
		//NON FUNZIONA! boh
		else
		   i++;	
	}
	return (str);
}

int		main(void)
{
	char test[] = "test, antani? .cel.lu.la.re";

	printf("%s", ft_strcapitalize(test));
}

