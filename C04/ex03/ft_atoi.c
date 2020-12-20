/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:34:00 by jmartini          #+#    #+#             */
/*   Updated: 2020/12/11 16:39:25 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int number;

	i = 0;
	sign = 0;
	number = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == 32)//isspace
		i++;
	while (str[i] == '-' || str[i] == '+')//checksign
	{
		if (str[i] == '-')
			sign--;
		if (str[i] == '+')
			sign++;
		i++;
	}
	if (sign >= 0)
		sign = 1;
	else if (sign < 0)
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + ((str[i] - '0'));
		i++;
	}
	return (number * sign);
}

int 	main()
{
	char test[] = "        --1234 ab567";
	printf("EMULAZIONE: %d\n", ft_atoi(test));
}

//3 while non innestati