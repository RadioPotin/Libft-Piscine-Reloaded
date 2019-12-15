NAME= ft_display_file
GCCEXE= gcc -Wall -Wextra -Werror -o
GCCOBJ= gcc -c
SRCS= main.c\
	 ft_display_file.c\
	 ft_putchar.c\
	 ft_putstr.c\
	 error_out.c
OBJ= main.o\
	 ft_display_file.o\
	 ft_putchar.o\
	 ft_putstr.o\
	 error_out.o
INC= -I hdr.h

.PHONY : all clean fclean re
$(NAME):
	@$(GCCEXE) $(NAME) $(SRCS) $(INC)
	@$(GCCOBJ) $(SRCS)

all: $(NAME)
	@$(GCCEXE) $(NAME) $(SRCS) $(INC)
	@$(GCCOBJ) $(SRCS)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
