/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etomasel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 15:54:57 by etomasel          #+#    #+#             */
/*   Updated: 2020/12/05 12:51:02 by etomasel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n && src[x] != 0)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = 0;
		x++;
	}
	return (dest);
}
