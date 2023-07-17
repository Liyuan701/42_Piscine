SRCS = ./srcs/*.c
CC = cc -Wall -Werror -Wextra
NAME = rush-02

$(NAME):
	$(CC) $(SRCS) main.c -o $(NAME)

all: $(NAME)


clean:
	rm -f $(NAME)

fclean: clean

re: clean all 
	clear 