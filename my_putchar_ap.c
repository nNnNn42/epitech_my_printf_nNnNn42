/*
** EPITECH PROJECT, 2022
** putchar_ap
** File description:
** d
*/

#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int my_printf(const char *format, ...);

int my_putchar(char c)
{
    return (write (1, &c, 1));
}

int my_putchar_ap(va_list *ap)
{
    return my_putchar(va_arg(*ap, int));
}
