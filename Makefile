# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 14:11:54 by ahalleux          #+#    #+#              #
#    Updated: 2022/06/28 14:46:46 by ahalleux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

BLACK		= $(shell tput -Txterm setaf 0)
RED			= $(shell tput -Txterm setaf 1)
GREEN		= $(shell tput -Txterm setaf 2)
YELLOW		= $(shell tput -Txterm setaf 3)
LIGHTPURPLE	= $(shell tput -Txterm setaf 4)
PURPLE		= $(shell tput -Txterm setaf 5)
BLUE		= $(shell tput -Txterm setaf 6)
WHITE		= $(shell tput -Txterm setaf 7)
RESET		= $(shell tput -Txterm sgr0)

SRC =		src/ps_error.c \
			src/ps_main.c \

COMMON =	common/ft_putstr.c \

INCLUDE =	include/ps.h \

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

all:			$(NAME)

$(NAME):
				@$(CC) ${CFLAGS} ${SRC} ${COMMON} -o ${NAME}
				@echo "$(GREEN)********** Compiled. $(RESET)"

clean:
				@$(RM) ${OBJS}
				@echo "$(PURPLE)********** Objects removed. $(RESET)"

fclean:			clean
				@$(RM) $(NAME) $(BONUS_NAME)
				@echo "$(LIGHTPURPLE)********** Executable removed. $(RESET)"

re:				fclean all

.PHONY:		all clean fclean re bonus