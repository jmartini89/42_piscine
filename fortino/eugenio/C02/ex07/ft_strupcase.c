/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etomasel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:57:43 by etomasel          #+#    #+#             */
/*   Updated: 2020/12/05 09:02:20 by etomasel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char *temp;

	temp = str;
	while (*temp != 0)
	{
		if (*temp >= 'a' && *temp <= 'z')
		{
			*temp -= 32;
		}
		temp++;
	}
	return (str);
}
