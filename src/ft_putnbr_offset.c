/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_offset.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 11:19:52 by azaliaus          #+#    #+#             */
/*   Updated: 2018/06/08 11:23:01 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_offset(int n, int offset)
{
	int ofst;

	ofst = offset - ft_get_nbr_len(n);
	if (ofst > 0)
		while (ofst--)
			ft_putchar(' ');
	ft_putnbr(n);
}
