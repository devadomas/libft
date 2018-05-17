/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str3join.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 17:13:34 by azaliaus          #+#    #+#             */
/*   Updated: 2018/05/17 18:54:27 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_str3join(char const *s1, char const *s2, char const *s3)
{
	size_t		i;
	size_t		x;
	size_t		z;
	char		*ret;
	char		*cpy;

	i = (s1 ? ft_strlen(s1) : 0);
	x = (s2 ? ft_strlen(s2) : 0);
	z = (s3 ? ft_strlen(s3) : 0);
	if (!(ret = (char *)malloc(sizeof(char) * (i + x + z + 1))))
		return (NULL);
	cpy = ret;
	if (s1)
		while (*s1)
			*(cpy++) = *(s1++);
	if (s2)
		while (*s2)
			*(cpy++) = *(s2++);
	if (s3)
		while (*s3)
			*(cpy++) = *(s3++);
	*cpy = '\0';
	return (ret);
}
