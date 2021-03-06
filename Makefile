# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/03 15:12:15 by azaliaus          #+#    #+#              #
#    Updated: 2018/11/23 00:28:57 by azaliaus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	gcc
FLAGS	=	-Wall -Wextra -Werror -I$(INC_DIR)

SRC_DIR	=	./src/
SRC		=	ft_memset.c														\
			ft_bzero.c														\
			ft_memcpy.c														\
			ft_memccpy.c													\
			ft_memmove.c													\
			ft_memchr.c														\
			ft_memcmp.c														\
			ft_strlen.c														\
			ft_strdup.c														\
			ft_strcpy.c														\
			ft_strncpy.c													\
			ft_strcat.c														\
			ft_strncat.c													\
			ft_strlcat.c													\
			ft_strchr.c														\
			ft_strrchr.c													\
			ft_strstr.c														\
			ft_strnstr.c													\
			ft_strcmp.c														\
			ft_strncmp.c													\
			ft_atoi.c														\
			ft_isalpha.c													\
			ft_isdigit.c													\
			ft_isalnum.c													\
			ft_isascii.c													\
			ft_isprint.c													\
			ft_toupper.c													\
			ft_tolower.c													\
			ft_memalloc.c													\
			ft_memdel.c														\
			ft_strnew.c														\
			ft_strdel.c														\
			ft_strclr.c														\
			ft_striter.c													\
			ft_striteri.c													\
			ft_strmap.c														\
			ft_strmapi.c													\
			ft_strequ.c														\
			ft_strnequ.c													\
			ft_strsub.c														\
			ft_strjoin.c													\
			ft_strtrim.c													\
			ft_putchar.c													\
			ft_putstr.c														\
			ft_putendl.c													\
			ft_putnbr.c														\
			ft_putchar_fd.c													\
			ft_putstr_fd.c													\
			ft_putendl_fd.c													\
			ft_putnbr_fd.c													\
			ft_strsplit.c													\
			ft_get_next_word.c												\
			ft_itoa.c														\
			ft_get_nbr_len.c												\
			ft_lstnew.c														\
			ft_lstdelone.c													\
			ft_lstdel.c														\
			ft_lstadd.c														\
			ft_lstiter.c													\
			ft_lstmap.c														\
			ft_str_upper.c													\
			ft_str_lower.c													\
			ft_strrev.c														\
			ft_convert_to_base.c											\
			ft_convert_to_base_long.c										\
			ft_putnbr_unsigned.c											\
			ft_pow.c														\
			ft_putchar_unicode.c											\
			ft_atoi_longlong.c												\
			ft_unicode_len.c												\
			ft_putnbr_longlong.c											\
			ft_putchar_ret.c												\
			ft_get_nbr_len_unsigned.c										\
			ft_strjoin_conn.c												\
			ft_floor.c														\
			ft_str2dup.c													\
			ft_unset2str.c													\
			get_next_line.c													\
			ft_strinsert.c													\
			ft_putstr_from.c												\
			ft_strnremove.c													\
			ft_isspace.c													\
			ft_str3join.c													\
			ft_swap.c														\
			ft_strcutout.c													\
			ft_split_args.c													\
			ft_str2del.c													\
			ft_str2len.c													\
			ft_putnbr_offset.c												\
			ft_isnumeric.c													\
			ft_strndup.c													\
			ft_hasquote.c													\
			ft_str2join.c													\
			ft_strlenchar.c													\
			ft_strarr_del.c													\
			ft_put2str.c													\
			ft_strjoin_by.c													\
			ft_print_rep.c
SRCS	=	$(addprefix $(SRC_DIR), $(SRC))

OBJ_DIR	=	./obj/
OBJ		=	$(SRC:.c=.o)
OBJS	=	$(addprefix $(OBJ_DIR), $(OBJ))

INC_DIR	=	./includes/
INC		=	libft.h
INCS	=	$(addprefix $(INC_DIR), $(INC))

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(INCS)
	@$(CC) $(FLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -f $(OBJS)
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: fclean re
