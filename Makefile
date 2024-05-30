SRC		= ft_printf.c \
			ft_diu.c \
			ft_ifcspc.c \
			ft_ifpxX.c \
			ft_printf_utils.c

SRCS	= ${addprefix ${PRE}, ${SRC}}

PRE		= srcs/

OBJS	= ${SRCS:.c=.o}

INCLUDES = incs

NAME	= libftprintf.a

LIBFT 	= libft

CC		= cc

AR		= ar rc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -I

all:		${NAME}

.c.o:
			@$(CC) $(CFLAGS) $(INCLUDES) -c  $< -o ${<:.c=.o}

${NAME}:	$(OBJS)
			@make -C $(LIBFT)
			@mv $(LIBFT)/libft.a $(NAME)
			@${AR} $(NAME) $(OBJS) 
			@echo "libftprintf created !"

clean:	
			@${RM} ${OBJS}
			@make clean -C $(LIBFT)
			@echo "printf objects cleaned !"

fclean: 	clean
			@${RM} ${NAME}
			@make fclean -C $(LIBFT)
			@echo "printf lib cleaned !"

re:			fclean all
			@echo "printf lib reloaded !"

.PHONY: 	all clean fclean re