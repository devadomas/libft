/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 17:58:49 by azaliaus          #+#    #+#             */
/*   Updated: 2018/05/13 14:54:53 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strinsert(const char *str, const char *c, size_t n)
{
	char	*ret;
	char	*cpy;

	if (!str)
		return (NULL);
	if (!(ret = ft_strnew(ft_strlen(str) + ft_strlen(c))))
		return (NULL);
	cpy = ret;
	while (*str && n--)
		*(ret++) = *(str++);
	while (*c)
		*(ret++) = *(c++);
	while (*str)
		*(ret++) = *(str++);
	return (cpy);
}
