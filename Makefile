# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 11:46:15 by cschiavo          #+#    #+#              #
#    Updated: 2023/03/22 20:50:53 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

SRC :=	ft_atoi.c\
	ft_bzero.c\
	ft_calloc.c\
	ft_isalnum.c\
	ft_isalpha.c \
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_itoa.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memset.c\
	ft_putchar_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_putstr_fd.c\
	ft_split.c\
	ft_strchr.c\
	ft_strdup.c\
	ft_strjoin.c\
	ft_strlcat.c\
	ft_strlcpy.c\
	ft_strlen.c\
	ft_strmapi.c\
	ft_strncmp.c\
	ft_strnstr.c\
	ft_strrchr.c\
	ft_substr.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_striteri.c\
	ft_split.c\
	ft_strtrim.c

BNS :=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
	ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJ_S = $(SRC:.c=.o) 

OBJ_B = $(BNS:.c=.o) 

CFLAG = -Wall -Werror -Wextra

all: $(NAME) status

$(NAME): $(OBJ_S)
	ar -rcs $@ $^ 

%.o:%.c
	@$(CC) -c $(CFLAG) -I. $< -o $@
status:
	echo "\033[5;1;92mcompleted\033[0m"
clean: status
	/bin/rm -f *.o

fclean:	clean
	/bin/rm -f $(NAME)

re: fclean all


bonus: $(OBJ_B)
	ar -rcs $(NAME) $^

.PHONY: all clean fclean re bonus
.SILENT:
