/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 17:23:47 by azaliaus          #+#    #+#             */
/*   Updated: 2018/06/27 17:59:59 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	is_spaces(const char *s)
{
	if (!s)
		return (1);
	while (*s)
	{
		if (*s != ' ' && *s != '\t' && *s != '\n')
			return (1);
		s++;
	}
	return (0);
}

char		*ft_strtrim(char const *s)
{
	int			begin;
	int			end;
	char		*ret;
	char		*cpy;

	if (!s)
		return (NULL);
	if (!is_spaces(s))
		return (ft_strnew(1));
	begin = 0;
	while (s[begin] == ' ' || s[begin] == '\t' || s[begin] == '\n')
		begin++;
	end = ft_strlen(s) - 1;
	while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
		end--;
	ret = (char *)malloc(sizeof(char) *
			((end - begin < 0 ? -1 : end - begin) + 2));
	if (!ret)
		return (NULL);
	cpy = ret;
	while (begin <= end)
		*(cpy++) = s[begin++];
	*cpy = '\0';
	return (ret);
}
