/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_by.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 16:34:13 by azaliaus          #+#    #+#             */
/*   Updated: 2018/06/25 16:43:01 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin_by(char **arr, char c)
{
	char		*ret;
	char		*tmp;
	char		**cpy;
	size_t		len;
	int			i;

	len = 0;
	cpy = arr;
	while (*cpy)
		len += ft_strlen(*(cpy++));
	len += ft_str2len(arr);
	if (!(ret = ft_strnew(len)))
		return (NULL);
	i = 0;
	ret[i++] = c;
	while (*arr)
	{
		tmp = *arr;
		while (*tmp)
			ret[i++] = *(tmp++);
		if (*(arr + 1))
			ret[i++] = c;
		arr++;
	}
	return (ret);
}
