/*
** EPITECH PROJECT, 2022
** printf
** File description:
** %u
*/

#include "my.h"
#include <stdarg.h>
#include <unistd.h>

int my_putnbr(int n)
{
    if (n < 0) {
        return 2;
    }
    if (n > 9) {
        my_putnbr(n / 10);
        my_putnbr(n % 10);
    } else
    my_putchar(n + '0');
}

int my_putnbr_ap(va_list *ap)
{
    return my_putnbr(va_arg(*ap, int));
}
