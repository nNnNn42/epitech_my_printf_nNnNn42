/*
** EPITECH PROJECT, 2022
** printf
** File description:
** putnbrbase
*/


#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int my_printf(const char *format, ...);
int my_putchar(char c);

int my_strlen(char const *str)
{
    int compteur = 0;
    while (*str != 0){
        compteur = compteur + 1;
        str++;
            }
    return compteur;
}

int my_putnbr_base(int nbr)
{
    char *base = "0123456789";
    my_strlen(base);
    int base_2 = my_strlen(base);

    if (nbr < 0){
        nbr = -nbr;
        my_putchar('-');
    }
    if (nbr == 0) {
        my_putchar(base[0]);
        return 0;
    }
    if (nbr > base_2) {
        my_putnbr_base(nbr / base_2);
        my_putchar(base[nbr % my_strlen(base)]);
        return 0;
    } else {
        my_putchar(nbr[base]);
        return 0;
    }
}

int my_putnbr_base_ap(va_list *ap)
{
    return my_putnbr_base(va_arg(*ap, int));
}
