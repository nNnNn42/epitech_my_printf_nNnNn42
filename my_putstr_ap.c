/*
** EPITECH PROJECT, 2022
** printf
** File description:
** putstr
*/

#include "my.h"
#include <stdarg.h>
#include <unistd.h>

int my_putchar(char c);

int my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return 0;

}

int my_putstr_ap(va_list *ap)
{
    return my_putstr(va_arg(*ap, char*));
}
