/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** help
*/

#ifndef MY
    #define MY

    #include <stdarg.h>
    #include <unistd.h>

typedef struct fonction_s {
    char c;
    int (*ptr)(va_list *);
} fonction_t;

int my_printf(const char *format, ...);
int my_putchar_ap(va_list *ap);
int my_putchar(char c);
int my_putnbr_base_ap(va_list *ap);
int my_putstr(char *str);
int my_putstr_ap(va_list *ap);
int my_putchar_percent_ap(va_list *ap);
int my_strlen(char const *str);
int my_putnbr_base(int nbr);
int my_putstr(char *str);
int my_putstr_ap(va_list *ap);
int my_putnbr(int n);
int my_putnbr_ap(va_list *ap);
int my_putnbr_base_octal(int n);
int my_putnbr_base_octal_ap(va_list *ap);
int my_putnbr_base_hexa(int n);
int my_putnbr_base_hexa_ap(va_list *ap);
int my_putnbr_base_hexa_maj(int n);
int my_putnbr_base_hexa_maj_ap(va_list *ap);
int my_putnbr_minus(int n);
int my_putnbr_minus_ap(va_list *ap);
#endif
