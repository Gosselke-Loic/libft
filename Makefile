# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 16:27:07 by lgosselk          #+#    #+#              #
#    Updated: 2024/01/18 11:06:33 by lgosselk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEFAULT = \033[0m
GREEN = \033[1;32m
YELLOW = \033[1;33m

NAME	=	libft.a

HEAD	=	./includes/libft.h

GCC		= gcc

AR		= ar rc

RM		= rm -f

LIB		= ranlib

CFLAGS	= -Wall -Wextra -Werror

GNL		=	get_next_line.c

ALLOC	=	ft_calloc.c ft_malloc.c

MEM		=	ft_memset.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c

PUT		=	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c

IS		=	ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isalnum.c

UTILS	= 	ft_atoi.c ft_bzero.c ft_itoa.c ft_split.c ft_tolower.c ft_toupper.c

PRINTF	=	ft_printf.c ft_print_int.c ft_print_hex.c ft_print_char.c ft_print_string.c \
			ft_print_pointer.c ft_print_unsigned.c

STR		=	ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
			ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c

BONUS	=	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c \
			ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

SRCS	=	$(addprefix gnl/, $(GNL)) \
			$(addprefix ft_is/, $(IS)) \
			$(addprefix ft_mem/, $(MEM)) \
			$(addprefix ft_put/, $(PUT)) \
			$(addprefix ft_str/, $(STR)) \
			$(addprefix printf/, $(PRINTF)) \
			$(addprefix ft_alloc/, $(ALLOC)) \
			$(addprefix ft_bonus/, $(BONUS)) \
			$(addprefix ft_utils/, $(UTILS)) \

OBJS	= ${SRCS:.c=.o}

all:		${NAME}

.c.o:
	@${GCC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			@${AR} ${NAME} ${OBJS}
			@${LIB} ${NAME}
			@echo "$(GREEN)Completed compilation of libft.$(DEFAULT)"

clean:
		@rm -f ${OBJS} ${B_OBJS}
		@echo "$(YELLOW)Objects removed.$(DEFAULT)"

fclean:		clean
			@rm -f ${NAME}
			@echo "$(YELLOW)Library removed.$(DEFAULT)"

re:	fclean all

.PHONY:	all clean fclean re
