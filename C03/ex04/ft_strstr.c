/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:17:49 by jmartini          #+#    #+#             */
/*   Updated: 2020/12/10 20:04:27 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//check 1st char in str, if true check 2nd, if true check 3rd, etc 
//if any returns false --> exit
//else 

char	*ft_strstr(char *str, char *tofind)
{
	int i;
	int j;
	int flag;
	int next;

	i = 0;
	flag = 0;
	while (tofind[i])
	{
		while (tofind[i] != str[flag])
			flag++;
		next = flag + 1;
		i++;
		if (tofind[i] == str[next])




	}
	return ('\0');
}

int		main(void)
{
	char str[] = "Foo Bar Baz";//haystack
	char tofind[] = "az";//needle

	printf("ORIGINALE: %s\n", strstr(str, tofind));
	printf("EMULAZIONE: %s\n", ft_strstr(str, tofind));
}
// locates first occurrence of null string needle in null haystack
