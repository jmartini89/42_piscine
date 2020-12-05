/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reb_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 14:13:58 by jmartini          #+#    #+#             */
/*   Updated: 2020/12/05 14:25:22 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int tmp;
	int frw;
	int rvr;

	tmp = 0;
	frw = 0;
	rvr = --size;
	while (frw != rvr / 2)
	{
		tmp = *(tab + frw);
		*(tab + frw) = *(tab + rvr);
		*(tab + rvr) = tmp;
		frw++;
		rvr--;
	}
}
