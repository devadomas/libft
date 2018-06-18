/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 11:15:47 by azaliaus          #+#    #+#             */
/*   Updated: 2018/06/18 11:28:06 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strndup(const char *str, size_t n)
{
	char		*ret;

	if (!str || !n)
		return (NULL);
	if (!(ret = ft_strnew(n)))
		return (NULL);
	ret = ft_strncpy(str, ret, n);
	return (ret);
}
