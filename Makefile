# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtinani- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/06 13:49:50 by gtinani-          #+#    #+#              #
#    Updated: 2024/05/06 13:51:57 by gtinani-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

LIB		= ar -rcs

RM		= /bin/rm -f

NAME	= libft.a

SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_toupper.c ft_tolower.c ft_strncmp.c ft_memcmp.c ft_atoi.c \
			ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_memset.c ft_bzero.c \
			ft_memcpy.c ft_memmove.c ft_memchr.c ft_strchr.c ft_strrchr.c \
			ft_strnstr.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c \
			ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS	= $(SRCS:.c=.o)

BONUS_S	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c \
			ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
			ft_lstiter.c ft_lstmap.c

BONUS_O	= $(BONUS_S:.c=.o)


all:		$(NAME)

$(NAME):	$(OBJS)
			$(LIB) $(NAME) $(OBJS)

bonus:		$(NAME) $(BONUS_O)
			$(LIB) $(NAME) $(BONUS_O)

%.o: %.c
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS) $(BONUS_O)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus


.PHONY:		all clean fclean re
