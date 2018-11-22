/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcutout.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 22:26:36 by azaliaus          #+#    #+#             */
/*   Updated: 2018/05/29 22:29:33 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strcutout(char const *s, unsigned int start, size_t len)
{
	char		*ptr;
	char		*cpy;

	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) - len + 1));
	if (!ptr || !s)
		return (NULL);
	cpy = ptr;
	while (start)
	{
		*(cpy++) = *(s++);
		start--;
	}
	while (len)
	{
		len--;
		s++;
	}
	while (*s)
	{
		*(cpy++) = *(s++);
	}
	*cpy = '\0';
	return (ptr);
}
