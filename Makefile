NAME	= libftprintf.a

SRC_PATH = srcs/
OBJ_PATH = obj/

SRC		= ft_printf.c \
			ft_diu.c \
			ft_ifcspc.c \
			ft_ifpxX.c \
			ft_printf_utils.c
SRCS	= ${addprefix $(SRC_PATH), $(SRC)}

OBJ		= $(SRC:.c=.o)
OBJS	= ${addprefix $(OBJ_PATH), $(OBJ)}

LIBFT 	= libft
LIBFTLIB = libft.a
AR		= ar rc

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
INCLUDES = -I incs

RM		= rm -rfd

all:		$(OBJ_PATH) $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
			@$(CC) $(CFLAGS) $(INCLUDES) -c  $< -o $@

$(OBJ_PATH):
			@mkdir $(OBJ_PATH)

$(NAME):	$(OBJS)
			@make -C $(LIBFT)
			@mv $(LIBFT)/$(LIBFTLIB) $(NAME)
			@${AR} $(NAME) $(OBJS)
			@make clean
			@echo "libftprintf created !"

clean:	
			@$(RM) $(OBJ_PATH) 
			@echo "printf objects cleaned !"

fclean: 	clean
			@$(RM) $(NAME)
			@echo "printf cleaned !"

re:			fclean all
			@echo "printf lib reloaded !"

.PHONY: 	all clean fclean re

-include ${DEPS}