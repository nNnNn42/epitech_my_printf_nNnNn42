/*
** EPITECH PROJECT, 2022
** printf
** File description:
** %o
*/

#include "my.h"
#include <stdarg.h>
#include <unistd.h>

int my_putnbr(int n);
int my_strlen(char  const *str);

int my_putnbr_base_octal(int n)
{
    char *base = "01234567";
    int base_2 = 8;

    if (n < 0) {
    my_putchar('-');
    n = -n;
    }
    if (n > base_2) {
    my_putnbr_base_octal(n / base_2);
    my_putchar(base[n % base_2]);
    return 1;
    } else
        my_putchar(base[n]);
        return 1;
}

int my_putnbr_base_octal_ap(va_list *ap)
{
    return my_putnbr_base_octal(va_arg(*ap, int));
}
