/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnremove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 16:14:08 by azaliaus          #+#    #+#             */
/*   Updated: 2018/05/14 16:21:32 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnremove(const char *str, size_t n)
{
	char	*ret;
	char	*cpy;
	size_t	i;

	if (!str)
		return (NULL);
	if (!(ret = ft_strnew(ft_strlen(str) - 1)))
		return (NULL);
	i = 0;
	cpy = ret;
	while (*str)
	{
		if (i != n)
			*(cpy++) = *str;
		i++;
		str++;
	}
	return (ret);
}
