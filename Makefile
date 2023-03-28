CC = gcc

CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format

RM = rm -rf

BETYY = betty $(SRC)

SRC = 1-helper_function.c 2-helper_function.c print_format.c

OBJ = $(SRC:.c=.o)

NAME = _printf

all:
	$(CC) $(CFLAGS)
	$(OBJ) $(BETTY) -o $(NAME)

clean:
	$(RM) *~ \#*\# \.\#* \
        $(NAME)

re: clean all
