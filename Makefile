
CC = cc
Flags = -Wall -Werror -Wextra
NAME = libftprintf.a
RM = rm -rf
MAND_SRC = ft_printf.c ft_format.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_hex.c ft_putptr_hex.c
MAND_OBJ = $(MAND_SRC:.c=.o)

$(NAME): $(MAND_OBJ)
	ar -rcs $(NAME) $(MAND_OBJ)
all: $(NAME)

%.o : %.c ft_printf.h
	${CC} ${Flags} -c -o $@ $<
clean: 
	$(RM) $(MAND_OBJ)
fclean: clean
	$(RM) $(NAME)
re:	fclean all
