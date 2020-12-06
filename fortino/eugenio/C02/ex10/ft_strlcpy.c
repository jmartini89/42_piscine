/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etomasel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:57:24 by etomasel          #+#    #+#             */
/*   Updated: 2020/12/05 13:14:10 by etomasel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int x;

	x = 0;
	if (size != 0)
	{
		while (x < (size - 1) && src[x] != 0)
		{
			*(dest + x) = *(src + x);
			x++;
		}
		*(dest + x) = 0;
	}
	x = 0;
	while (*(src + x) != 0)
	{
		x++;
	}
	return (x);
}
