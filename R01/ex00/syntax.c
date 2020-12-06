/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 19:11:28 by jmartini          #+#    #+#             */
/*   Updated: 2020/12/06 19:40:12 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_syntaxcheck(char *str)
{
	int index;

	index = 0;
	while (index < 31)
	{
		if (str[index] < 49 || str[index] > 52)
		{
			write(1, "Syntax error: not a proper number\n", 34);
			return (0);
		}
		if (index == 30)
		{
			return (1);
		}
		index++;
		if (str[index] != ' ')
		{
			write(1, "Syntax error: not a space\n", 26);
			return (0);
		}
		index++;
	}
	return (1);
}
