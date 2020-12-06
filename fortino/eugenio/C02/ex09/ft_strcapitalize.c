/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etomasel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:44:26 by etomasel          #+#    #+#             */
/*   Updated: 2020/12/05 09:03:02 by etomasel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check(char c)
{
	if (c < '0')
		return (0);
	else if (c > '9' && c < 'A')
		return (0);
	else if ((c > 'Z' && c < 'a') || c > 'z')
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	char *temp;

	temp = str;
	while (*temp != 0)
	{
		if (check(*(temp - 1)) == 0)
		{
			if (*temp >= 'a' && *temp <= 'z')
				*temp -= 32;
		}
		else if (*temp >= 'A' && *temp <= 'Z')
		{
			*temp += 32;
		}
		temp++;
	}
	return (str);
}
