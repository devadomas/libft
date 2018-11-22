/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 16:10:04 by azaliaus          #+#    #+#             */
/*   Updated: 2018/06/21 16:11:08 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlenchar(const char *str, char c)
{
	size_t		ret;

	ret = 0;
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == c)
			break ;
		ret++;
		str++;
	}
	return (ret);
}
