/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 14:40:08 by jmartini          #+#    #+#             */
/*   Updated: 2020/12/06 19:39:47 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_syntaxcheck(char *str);
int	ft_strlen(char *str);

int	main(int argc, char *argv[])
{
	int strcnt;

	if (argc != 2)
	{
		write(1, "Error: not enough or too many arguments\n", 40);
		return (0);
	}
	else
	{
		strcnt = ft_strlen(&argv[1][0]);
	}
	if (strcnt != 31)
	{
		write(1, "Error: not enough or too many conditions\n", 41);
		return (0);
	}
	if ((ft_syntaxcheck(&argv[1][0])) == 0)
	{
		return (0);
	}
	else
		write(1, "42\n", 3);
}
