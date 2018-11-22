/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_from.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 18:16:05 by azaliaus          #+#    #+#             */
/*   Updated: 2018/05/09 18:17:43 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putstr_from(const char *str, size_t n)
{
	if (!str)
		return ;
	while (*str && n)
	{
		str++;
		n--;
	}
	ft_putstr(str);
}
