/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 15:46:40 by jmartini          #+#    #+#             */
/*   Updated: 2020/12/05 20:25:55 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	ft_strcpy(char *dest, char *src)//SAREBBE FUNZIONE PUNTATA!
{
	int index;
	int test;//TEST

	index = 0;
	test = 1;//TEST
	while (*src >= '\0')//SEGFAULT HERE!!!
	{
		dest[index] = src[index];
		index++;
		test--;
	}
	return (0);
}

int		main(void)
{
	char dest[12] = "destination";
	char src[4]; 
	src[0] = 'X';
	src[1] = 'Y';
	src[2] = 'Z';
	int iterator = 0;

	ft_strcpy(dest, src);
	write(1, &dest, 11);
	/*while (dest[iterator] != '\0')
	{
		printf("%c", dest);
		iterator++;
	}*/
}

//segfault : accessing 'not allowed/wrong' memory address
