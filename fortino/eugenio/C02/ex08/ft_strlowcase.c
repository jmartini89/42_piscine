/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etomasel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:34:46 by etomasel          #+#    #+#             */
/*   Updated: 2020/12/05 09:02:12 by etomasel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char *temp;

	temp = str;
	while (*temp != 0)
	{
		if (*temp >= 'A' && *temp <= 'Z')
		{
			*temp += 32;
		}
		temp++;
	}
	return (str);
}
