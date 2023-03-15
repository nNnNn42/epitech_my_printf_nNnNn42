/*
** EPITECH PROJECT, 2022
** tempo
** File description:
** ff
*/


#include "my.h"
#include <stdarg.h>
#include <unistd.h>

int my_putnbr_minus(int n)
{
    if (n < 0) {
    my_putchar('-');
    n = -n;
    }
    if (n > 9) {
        my_putnbr_minus(n / 10);
        my_putnbr_minus(n % 10);
    } else
    my_putchar(n + '0');
}

int my_putnbr_minus_ap(va_list *ap)
{
    return my_putnbr_minus(va_arg(*ap, int));
}
