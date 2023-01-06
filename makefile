# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/13 22:09:05 by rdoukali          #+#    #+#              #
#    Updated: 2022/07/08 21:48:57 by rdoukali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAMEB = My_Cheker

INCLUDE = -I ./Headers

SRCS 		=	$(shell find ./src_mnd -name "*.c")

SRCS_BONUS 	=	$(shell find ./checker -name "*.c")
# BONS		= 	$(addprefix $(BONS_DIR), $(SRCS_BONUS))
BONS 		=	$(SRCS_BONUS:.c=.o)


OBJS 		=	$(SRCS:.c=.o)

CC = gcc

CFLAG = -Wall -Wextra -Werror

%.o : %.c
	@${CC} $(INCLUDE) ${CFLAG} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
		@echo "\033[33m---------------- Compiling ... --------------------"
		@${CC} $(INCLUDE) ${OBJS} -o ${NAME}
		@echo "\033[31m༺ (\033[31m\033[32mPUSH_SWAP Compiled!\033[31m)༻\n"

${NAMEB}: ${BONS}
		@echo "\033[33m-------------------- Compiling BONUS... --------------------"
		@${CC} $(INCLUDE) ${BONS} -o ${NAMEB}
		@echo "\033[31m༺ (\033[31m\033[32mCHEKER Compiled!\033[31m)༻\n"


bonus: ${NAMEB}

m : ${NAME} ${NAMEB}

clean:
	@echo "\033[33m     Clean  ALL ..."
	@rm -f	$(OBJS) $(BONS)

fclean: clean
	@rm -f	$(NAME) $(NAMEB)
	@echo "\033[36mEverything is cleaned! \033[32m✓\n"

re: fclean all

reb : fclean all bonus

.PHONY: all clean fclean re