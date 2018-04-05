/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 15:20:36 by azaliaus          #+#    #+#             */
/*   Updated: 2018/04/05 17:38:24 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>

int	main(void)
{
	// memalloc
	printf("Testing: memaloc..\n");
	int i = 0;
	char *tab = ft_memalloc(10);
	while (i++ < 10)
	{
		printf("%d: %d;", i, (int)*tab);
		tab++;
	}
	printf("\n");
	// /memalloc
	// memdel
	printf("Testing: memdel...\n");
	char *ptr = ft_memalloc(1);
	ptr[0] = 'a';
	printf("Before memdel: %d\n", *ptr);
	ft_memdel((void **)&ptr);
	printf("After memdel: %d\n", (int)ptr);
	// /memdel
	// strnew
	printf("Testing: strnew...\n");
	char *str = ft_strnew(5);
	str[0] = 'a';
	str[1] = 'b';
	printf("Our string return: %s", str);
	// /strnew
	// strclr
	printf("Testing: strclr...\n");
	ft_strdel(&str);
	str = ft_strdup("Hey");
	printf("Before: %s\n", str);
	ft_strclr(str);
	printf("After: %s\n", str);
	// /strclr
	// striter
	printf("Testing: striter...\n");
	ft_strdel(&str);
	str = ft_strdup("Hello!");
	ft_striter(str, (void *)&ft_toupper);
	printf("Result: %s\n", str);
	// /striter
	// strmap
	printf("Testing: strmap...\n");
	ft_strdel(&str);
	str = ft_strdup("hello");
	printf("Old str: %s\n", str);
	char *new_str = ft_strmap(str, (char (*)(char))&ft_toupper);
	printf("New str: %s\n", new_str);
	// /strmap
	// strequ
	printf("Testing: strequ...\n");
	printf("NULL && asd : %d\n", ft_strequ(NULL, "asd"));
	printf("asd && asd : %d\n", ft_strequ("asd", "asd"));
	printf("asd && asdf : %d\n", ft_strequ("asd", "asdf"));
	// /strequ
	// strnequ
	printf("Testing: strnequ...\n");
	printf("NULL && asd : %d\n", ft_strnequ(NULL, "asd", 1));
	printf("asd && asd : %d\n", ft_strnequ("asd", "asd", 3));
	printf("asd && asdf : %d\n", ft_strnequ("asd", "asdf", 2));
	printf("abc && abd : %d\n", ft_strnequ("abc", "abd", 2));
	printf("ededeqdf && endofstr : %d\n", ft_strnequ("ededeqdf", "", 0));
	// /strequ
	// strsub
	printf("Testing: strsub...\n");
	printf("Result: %s\n", ft_strsub("hello", 3, 2));
	printf("Result: %s\n", ft_strsub("hello", 5, 2));
	printf("Result: %d\n", (int)ft_strsub("hello", 1, 1));
	printf("Result: %d\n", (int)ft_strsub(NULL, 1, 1));
	// /strsub
	// strjoin
	printf("Result: %s\n", ft_strjoin("Haha", "123"));
	printf("Result: %s\n", ft_strjoin("", "123"));
	printf("Result: %s\n", ft_strjoin(NULL, "123"));
	// /strjoin
	// putstr
	ft_putstr("Hey mom ");
	// /putstr
	// ft_putendl
	ft_putendl("What's up?");
	// /ft_putendl
	// strtrim
	printf("Trimmed str: %s\n",ft_strtrim("\n\nHello\n\n"));
	printf("Trimmed str: %s\n",ft_strtrim("\n\n\n\n"));
	printf("Trimmed str: %s\n",ft_strtrim(""));
	// /strtrm
	// ft_strsplit
	char **arr = ft_strsplit("*hello*fellow***students*", '*');
	while (*arr)
	{
		printf("Result: %s\n", *arr);
		arr++;
	}
	// /ft_strsplit
	// ft_itoa
	printf("Testing: ft_itoa...\n");
	printf("Returned str: %s\n", ft_itoa(10));
	printf("Returned str: %s\n", ft_itoa(0));
	// /ft_itoa
	// ft_lstnew
	t_list *lst;

	lst = ft_lstnew((void *)"ha", sizeof(char) * 3);
	if (lst)
		printf("%s\n", (char *)lst->content);
	else
		printf("List failed\n");
	// /ft_lstnew
	// lstdelone
	printf("Freeing pointer...\n");
	/*ft_lstdelone(&lst, &ft_memdel);
	if (lst)
		printf("Not freed\n");
	else
		printf("Freed!\n");*/
	// /lstdelone
	// lstadd
	t_list *new_lst;
	new_lst = ft_lstnew((void *)"aha", sizeof(char) * 3);
	ft_lstadd(&lst, new_lst);
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	// /lstadd
	printf("Checking strncmp!\n");
	printf("Result: %d\n", ft_strncmp("ab\0cde", "abcc\0e", 20));
	printf("Original result: %d\n", strncmp("ab\0cde", "abcc\0e", 20));
	// ft_str_upper
	char *str_str = ft_strdup("asdfgh");
	printf("Before: %s\n", str_str);
	ft_str_upper(str_str);
	printf("After: %s\n", str_str);
	ft_str_lower(str_str);
	printf("After lowerting: %s\n", str_str);
	// /ft_str_upper
	//
	char	*dest;
	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	dest[11] = 'a';
	printf("ft_result: %zu\n%s\n", ft_strlcat(dest, "lorem", 15), dest);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	dest[11] = 'a';
	printf("Original: %zu\n%s\n", strlcat(dest, "lorem", 15), dest);
	printf("output\n");
	return (0);
}
