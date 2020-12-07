/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 13:29:57 by jmartini          #+#    #+#             */
/*   Updated: 2020/12/07 15:21:33 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
		n--;
	}
	while (n > 0)
	{
		dest[index] = '\0';
		index++;
		n--;
	}
	return (dest);
}

int main(void)
{
	unsigned int size;
	char src[] = "XYZ";
	char dest[] = "antani";

	size = 6;
	ft_strncpy(dest, src, size);
	printf("%s\n", dest);
}
