# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bepifani <bepifani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 11:48:01 by bepifani          #+#    #+#              #
#    Updated: 2021/10/05 18:26:49 by bepifani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIST = ft_atoi.c	ft_bzero.c	ft_isalnum.c	ft_isalpha.c\
		ft_isascii.c	ft_isdigit.c	ft_isprint.c	ft_memchr.c\
		ft_memcmp.c	ft_memmove.c	ft_memset.c	ft_strchr.c	ft_strlcat.c\
		ft_strlcpy.c	ft_strlen.c	ft_strncmp.c	ft_strnstr.c\
		ft_strrchr.c	ft_tolower.c	ft_toupper.c

FLAGS = -Wall -Wextra -Werror



all : 
	gcc $(LIST) -o $(NAME)
	ar rc $(NAME) *.o
	

clean :
	rm -f *.o

fclean: clean
	rm -f $(NAME)

.PHONY : all clean fclean