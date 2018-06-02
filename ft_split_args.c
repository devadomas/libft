/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 14:08:56 by azaliaus          #+#    #+#             */
/*   Updated: 2018/06/02 21:37:07 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isquote(char c)
{
	if (c == '"' || c == '\'')
		return (1);
	return (0);
}

static int		skip_quote(char **cmd)
{
	char	type;
	char	*cpy;
	int		ret;

	cpy = *cmd;
	cpy++;
	ret = 1;
	type = **cmd;
	while (*cpy && *cpy != type)
	{
		cpy++;
		ret++;
	}
	*cmd = cpy;
	return (ret);
}

static int		get_arg_count(const char *cmd)
{
	int			counter;
	int			state;

	counter = 0;
	state = 0;
	while (*cmd)
	{
		if (ft_isspace(*cmd))
			state = 0;
		else if (!state)
		{
			state = 1;
			counter++;
		}
		(ft_isquote(*cmd) ? skip_quote((char **)&cmd) : 0);
		cmd++;
	}
	return (counter);
}

char			*get_next_arg(const char *cmd)
{
	char		*ret;
	char		*cpy;
	int			len;

	cpy = (char *)cmd;
	len = 0;
	while (*cpy)
	{
		if (ft_isspace(*cpy))
			break ;
		if (ft_isquote(*cpy))
			len += skip_quote(&cpy);
		len++;
		cpy++;
	}
	ret = ft_strsub(cmd, 0, len);
	return (ret);
}

char			**ft_split_args(const char *cmd)
{
	char		**ret;
	int			i;
	int			state;

	if (!cmd || !ft_strlen(cmd))
		return (NULL);
	i = get_arg_count(cmd);
	if (!(ret = (char **)ft_memalloc(sizeof(char *) * (i + 1))))
		return (NULL);
	ret[i] = NULL;
	i = 0;
	state = 0;
	while (*cmd)
	{
		if (ft_isspace(*cmd))
			state = 0;
		else if (!state)
		{
			ret[i++] = get_next_arg(cmd);
			state = 1;
		}
		(ft_isquote(*cmd) ? skip_quote((char **)&cmd) : 0);
		cmd++;
	}
	return (ret);
}
