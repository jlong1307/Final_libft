# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlong <jlong@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/22 12:40:37 by jlong             #+#    #+#              #
#    Updated: 2021/04/16 14:47:31 by jlong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove ft_memchr ft_memcmp ft_strlen ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_strlcpy ft_strlcat ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd

B_SRC		= ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone ft_lstclear ft_lstiter ft_lstmap


SRCS		= $(addsuffix .c, ${SRC})

B_SRCS		= $(addsuffix .c, ${B_SRC})

HEAD		= ./includes/

OBJS		= ${SRCS:.c=.o}

B_OBJS		= ${B_SRCS:.c=.o}

NAME		= libft.a

CC			= gcc
RM			= rm -f
AR			= ar rc
RN			= ranlib

CFLAGS		= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS}
			${RN} ${NAME}

bonus:		${B_OBJS}
			${AR} ${NAME} ${B_OBJS}
			${RN} ${NAME}

all:		$(NAME)

clean:
			${RM} ${OBJS} ${B_OBJS}

fclean:		clean
			${RM} $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re
