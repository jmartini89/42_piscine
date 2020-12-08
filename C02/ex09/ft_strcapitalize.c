/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:37:02 by jmartini          #+#    #+#             */
/*   Updated: 2020/12/08 19:21:00 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_alphanum(char c)
{
	if (c >= '0' && c <= '9')
		return (0);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (2);
	else
		return (3);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_alphanum(str[i]) == 2 && ft_alphanum(str[i - 1]) == 3)
		{
			str[i] = str[i] - 32;
		}
		else if (ft_alphanum(str[i]) == 1 && ft_alphanum(str[i - 1]) == 2)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
