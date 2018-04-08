# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnardozi <pnardozi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/12 20:45:39 by pnardozi          #+#    #+#              #
#    Updated: 2017/12/15 16:00:02 by pnardozi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -c -Wall -Werror -Wextra

NAME = libft.a

SRC = ft_atoi.c \
      get_next_line_one_file.c \
      ft_eol.c \
      ft_is_in_pos.c \
      ft_is_in_at.c \
      ft_itoc.c \
      ft_count_var.c \
      ft_wputchar.c \
      ft_strdupw.c\
      ft_wctoi.c \
      ft_unsigned_itoa.c \
      ft_strcap.c \
      ft_puttab.c \
      ft_putlong.c \
      ft_long_atoi.c \
      ft_long_itoa.c \
      ft_decim.c \
      ft_ctoi.c \
      ft_count_unsigned_var.c \
      get_next_line_multi.c \
      ft_bzero.c \
      ft_countsizeword.c \
      ft_countword.c \
      ft_isalnum.c \
      ft_isalpha.c \
      ft_isascii.c \
      ft_isdigit.c \
      ft_isprint.c \
      ft_iswp.c \
      ft_itoa.c \
      ft_lstadd.c \
      ft_lstdel.c \
      ft_lstdelone.c \
      ft_lstiter.c \
      ft_lstmap.c \
      ft_lstnew.c \
      ft_memalloc.c \
      ft_memccpy.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_memcpy.c \
      ft_memdel.c \
      ft_memmove.c \
      ft_memset.c \
      ft_nbdigit.c \
      ft_putchar.c \
      ft_putchar_fd.c \
      ft_putendl.c \
      ft_putendl_fd.c \
      ft_putnbr.c \
      ft_putnbr_fd.c \
      ft_putstr.c \
      ft_putstr_fd.c \
      ft_strcat.c \
      ft_strcat_p.c \
      ft_strchr.c \
      ft_strclr.c \
      ft_strcmp.c \
      ft_strcpy.c \
      ft_strcpy_p.c \
      ft_strdel.c \
      ft_strdup.c \
      ft_strequ.c \
      ft_striter.c \
      ft_striteri.c \
      ft_strjoin.c \
      ft_strlcat.c \
      ft_strlen.c \
      ft_strlen_p.c \
      ft_strlen_at_p.c \
      ft_strmap.c \
      ft_strmapi.c \
      ft_strncat.c \
      ft_strncmp.c \
      ft_strncpy.c \
      ft_strnequ.c \
      ft_strnew.c \
      ft_strnstr.c \
      ft_strrchr.c \
      ft_strsplit.c \
      ft_strstr.c \
      ft_strsub.c \
      ft_strtrim.c \
      ft_tolower.c \
      ft_toupper.c 

OBJ = $(SRC:.c=.o)

RED = \033[31m
GREEN = \033[32m
END = \033[0m

all : $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	@echo "$(GREEN)LIBFT READY$(END)"
%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	/bin/rm -f $(OBJ)
	@echo "$(RED)LIBFT OBJECTS REMOVE$(END)"

fclean: clean
	/bin/rm -f $(NAME)
	@echo "$(RED)LIBFT.A REMOVE$(END)"

re: fclean all
