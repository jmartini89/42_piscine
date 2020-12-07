/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etomasel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 12:21:04 by etomasel          #+#    #+#             */
/*   Updated: 2020/12/05 12:21:54 by etomasel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int x;

	x = 0;
	while (*(src + x) != 0)
	{
		*(dest + x) = *(src + x);
		x++;
	}
	*(dest + x) = 0;
	return (dest);
}