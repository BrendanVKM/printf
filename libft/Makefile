NAME = libft.a

SRC_PATH = srcs/
OBJ_PATH = obj/

SRC	= ft_strlen.c		\
	ft_putchar_fd.c		\
	ft_putstr_fd.c
SRCS	= ${addprefix $(SRC_PATH), $(SRC)}

OBJ		= $(SRC:.c=.o)
OBJS	= ${addprefix $(OBJ_PATH), $(OBJ)}

AR = ar rc
RM = rm -rdf

CC = cc
FLAGS = -Wall -Wextra -Werror
INCLUDES = -I ../incs

all:		$(OBJ_PATH) $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
			@$(CC) $(CFLAGS) $(INCLUDES) -c  $< -o $@

$(OBJ_PATH):
			@mkdir $(OBJ_PATH)

$(NAME): 	$(OBJS)
			@${AR} $(NAME) $(OBJS)
			@echo "libft created !"
			make clean

clean:
			@$(RM) $(OBJ_PATH) 
			@echo "libft objects cleaned !"

fclean:
			@${RM} $(OBJ_PATH)
			@${RM} $(NAME)
			@echo "libft cleaned !"

re: 		fclean all
			@echo "libft lib reloaded !"

.PHONY: all clean fclean re