/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspazzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 08:56:45 by lspazzin          #+#    #+#             */
/*   Updated: 2020/12/01 13:56:19 by lspazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_find_max(int *str, int size)
{
	int i;
	int posmax;
	int temp;

	temp = -2147483648;
	i = 0;
	posmax = 0;
	while (i < size)
	{
		if (*str > temp)
		{
			temp = *str;
			posmax = i; //save position
		}
		i++;
		str++;
	}
	return (posmax);
}

void	ft_sort_int_tab(int *str, int size)
{
	int count;
	int temp;
	int *strtemp;
	int sizetemp;

	sizetemp = size;
	strtemp = str + size - 1;
	count = 0;
	temp = 0;
	while (sizetemp > 0)
	{
		count = ft_find_max(str, sizetemp);
		str = str + count;
		temp = *str;
		*str = *strtemp;
		*strtemp = temp;
		str = str - count;
		sizetemp--;
		strtemp--;
	}
}

int main(void)
{
	int aldo[] = {123, 0, 1, -75, 42, 145664651, 89};
	int i;

	i = 0;
	ft_sort_int_tab(aldo, 7);
	while(i < 7)
	{
		printf("%d, ", aldo[i]);
		i++;
	}
}