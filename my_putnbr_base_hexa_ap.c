/*
** EPITECH PROJECT, 2022
** printf
** File description:
** %x
*/

#include "my.h"
#include <stdarg.h>
#include <unistd.h>

int my_putnbr(int n);
int my_strlen(char const *str);

int my_putnbr_base_hexa(int n)
{
    char *base = "0123456789abcdef";
    int base_2 = 16;

    if (n < 0) {
    my_putchar('-');
    n = -n;
    }
    if (n > base_2) {
    my_putnbr_base_hexa(n / base_2);
    my_putchar(base[n % base_2]);
    return 1;
    } else
        my_putchar(base[n % base_2]);
        return 1;
}

int my_putnbr_base_hexa_ap(va_list *ap)
{
    return my_putnbr_base_hexa(va_arg(*ap, int));
}
