CC=cc
#FLAGS= -Wall -Werror -Wextra 
AR=ar cr
RM=rm -rf
FILES=	ft_print_hex.c ft_print_ptr.c ft_printf.c ft_putchar.c ft_putnbr_uns.c ft_putnbr.c ft_putstr.c ft_strlen.c
	   
NAME=libftprintf.a
OBJ=$(FILES:.c=.o)


all: $(NAME)
	

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)

%.o: %.c 
	@$(CC)  -c $<

clean:
	@$(RM) $(OBJ) 

fclean: clean
	@$(RM) $(NAME)

re: fclean all