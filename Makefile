##
## EPITECH PROJECT, 2022
## makefile
## File description:
## os
##

SRC = my_printf.c\
	my_putchar_ap.c\
	my_putchar_percent_ap.c\
	my_putnbr_base_ap.c\
	my_putstr_ap.c\
	my_putnbr_ap.c\
	my_putnbr_base_octal_ap.c\
	my_putnbr_base_hexa_ap.c\
	my_putnbr_base_hexa_maj_ap.c\
	my_putnbr_minus_ap.c

SRC_CRITERION	=	tests/test_flags_all.c

OBJ = $(SRC:.c=.o)

OBJ_CRITERION = $(SRC_CRITERION:.c=.o)

TARGET = libmy.a

all: $(TARGET)

$(TARGET): $(OBJ)
	ar rc $(TARGET) $(OBJ)

clean:
	rm -rf $(OBJ) $(OBJ_CRITERION) $(*.o) unit_tests

fclean: clean
	rm -rf $(TARGET)

re: fclean all

tests_run: $(OBJ) $(OBJ_CRITERION)
	gcc $(OBJ) $(OBJ_CRITERION) -lcriterion --coverage -o unit_tests
	./unit_tests
