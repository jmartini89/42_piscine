/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:28:07 by jmartini          #+#    #+#             */
/*   Updated: 2020/12/07 15:50:56 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int ind;

	ind = 0;
	while (str[ind] != '\0')
	{
		if ((str[ind] >= 65 && str[ind] <= 90) || (str[ind] >= 97 && str[ind] <= 122))
		ind++;
		else
			return (0);
	}
	return (1);
}

int		main(void)
{
	char str[] = "";
	int output = ft_str_is_alpha(str);

	//ft_str_is_alpha(str);
	//output = ft_str_is_alpha;
	printf ("%d", output);
}
