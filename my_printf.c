/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** noe samy
*/

#include <unistd.h>
#include <stdarg.h>
#include "my.h"

static fonction_t funcs[] = {
    {'c', my_putchar_ap},
    {'d', my_putnbr_minus_ap},
    {'i', my_putnbr_minus_ap},
    {'s', my_putstr_ap},
    {'%', my_putchar_percent_ap},
    {'u', my_putnbr_ap},
    {'o', my_putnbr_base_octal_ap},
    {'x', my_putnbr_base_hexa_ap},
    {'X', my_putnbr_base_hexa_maj_ap},
};

int print(char const *format, va_list *ap, int i)
{
    for (int j = 0; j < 9; j++) {
        if (funcs[j].c == format[i + 1]) {
            return funcs[j].ptr(ap);
        }
    }
    return 0;
}

int my_printf(const char *format, ...)
{
    va_list ap = {0};
    va_start(ap, format);
    int taille = 0;
    int i = 0;
    for (; format[i] != '\0'; i++) {
        if (format[i] == '%') {
        taille += print(format, &ap, i);
        i = i + 1;
    } else {
        taille += my_putchar(format[i]);
        }
    }
    va_end(ap);
    return taille;
}
