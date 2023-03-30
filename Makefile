CC = gcc

CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format

RM = rm -rf

BETYY = betty $(SRC)

SRC1 = 	1-helper_functions.c 2-helper_functions.c print_format.c main.c

SRC2 =  1-helper_functions.c 2-helper_functions.c print_format.c local_testing.c

NAME1 = _printf

NAME2 = test

all:	1

1:
	$(CC) $(CFLAGS) $(SRC1) -o $(NAME1)

test:
	$(CC) $(CFLAGS) $(SRC2) -o $(NAME2)

clean:
	$(RM) *~ \#*\# \.\#* \
        $(NAME)

re: clean all
