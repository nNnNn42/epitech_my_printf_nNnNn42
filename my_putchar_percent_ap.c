/*
** EPITECH PROJECT, 2022
** printf
** File description:
** %%
*/

#include "my.h"
#include <stdarg.h>
#include <unistd.h>

int my_printf(const char *format, ...);
int my_putchar(char c);

int my_putchar_percent_ap(va_list *ap)
{
    return my_putchar(37);
}
