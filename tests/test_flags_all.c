/*
** EPITECH PROJECT, 2022
** printf
** File description:
** criterion
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../my.h"

void redirect_stdout(void)
{
    cr_redirect_stdout();
}

Test(my_putchar, is_my_putchar_display_one_character, .init = redirect_stdout) {
    my_putchar('a');

    cr_assert_stdout_eq_str("a");
}

Test(my_printf, test_flagx, .init = redirect_stdout) {
    my_printf("%x", 3);

    cr_assert_stdout_eq_str("3");
}

Test(my_printf, test_flags, .init = redirect_stdout) {
    my_printf("%s", "Bonjour");

    cr_assert_stdout_eq_str("Bonjour");
}

Test(my_printf, test_flag_double_string, .init = redirect_stdout) {
    my_printf("%s%s", "ouie", "tnon");

    cr_assert_stdout_eq_str("ouietnon");
}

Test(my_printf, test_flag_base_hexa, .init = redirect_stdout) {
    my_printf("%x", 14);

    cr_assert_stdout_eq_str("e");
}

Test(my_printf, test_flag_base_hexa_2, .init = redirect_stdout) {
    my_printf("%x%x", 14, 15);

    cr_assert_stdout_eq_str("ef");
}

Test(my_printf, test_flag_base_hexa_maj, .init = redirect_stdout) {
    my_printf("%X", 14);

    cr_assert_stdout_eq_str("E");
}

Test(my_printf, test_flag_base_hexa_maj_2, .init = redirect_stdout) {
    my_printf("%X%X", 14, 15);

    cr_assert_stdout_eq_str("EF");
}

Test(my_printf, test_flag_string_plus_base_hexa, .init = redirect_stdout) {
    my_printf("%s%x", "oui", 4);

    cr_assert_stdout_eq_str("oui4");
}

Test(my_printf, test_flag_string_plus_base_hexa_2, .init = redirect_stdout) {
    my_printf("%s%x", "oui", 10);

    cr_assert_stdout_eq_str("ouia");
}

Test(my_printf, test_flag_string_plus_base_hexa_maj, .init = redirect_stdout) {
    my_printf("%s%X", "oui", 10);

    cr_assert_stdout_eq_str("ouiA");
}

Test(my_printf, test_flag_string_plus_base_hexmaj2, .init = redirect_stdout) {
    my_printf("%s%X", "oui", 13);

    cr_assert_stdout_eq_str("ouiD");
}

Test(my_printf, test_flags_percent, .init = redirect_stdout) {
    my_printf("%%");

    cr_assert_stdout_eq_str("%");
}

Test(my_printf, test_flag_base_otcal, .init = redirect_stdout) {
    my_printf("%o", 10);

    cr_assert_stdout_eq_str("12");
}

Test(my_printf, test_flag_base_octal, .init = redirect_stdout) {
    my_printf("%o", 150);

    cr_assert_stdout_eq_str("226");
}

Test(my_printf, test_flag_base_octal_percent, .init = redirect_stdout) {
    my_printf("%o%%", 150);

    cr_assert_stdout_eq_str("226%");
}

Test(my_printf, test_flag_base_octal_string, .init = redirect_stdout) {
    my_printf("%o%s", 150, "nice");

    cr_assert_stdout_eq_str("226nice");
}

Test(my_printf, test_same_reverse, .init = redirect_stdout) {
    my_printf("%s%o", "nice", 150);

    cr_assert_stdout_eq_str("nice226");
}

Test(my_printf, test_flag_i, .init = redirect_stdout) {
    my_printf("%i", 80);

    cr_assert_stdout_eq_str("80");
}

Test(my_printf, test_flag_i_2, .init = redirect_stdout) {
    my_printf("%i", -79);

    cr_assert_stdout_eq_str("-79");
}

Test(my_printf, test_flag_d, .init = redirect_stdout) {
    my_printf("%i", 80);

    cr_assert_stdout_eq_str("80");
}

Test(my_printf, test_flag_d_2, .init = redirect_stdout) {
    my_printf("%i", -78);

    cr_assert_stdout_eq_str("-78");
}

Test(my_printf, test_flag_d_plus_i, .init = redirect_stdout) {
    my_printf("%d%i", 80,70);

    cr_assert_stdout_eq_str("8070");
}

Test(my_printf, test_flag_d_plus_i_2, .init = redirect_stdout) {
    my_printf("%d%i", -70,80);

    cr_assert_stdout_eq_str("-7080");
}

Test(my_printf, test_flag_i_plus_d, .init = redirect_stdout) {
    my_printf("%i%d", 49,88);

    cr_assert_stdout_eq_str("4988");
}

Test(my_printf, test_flag_i_plus_d_2, .init = redirect_stdout) {
    my_printf("%i%d", -21,42);

    cr_assert_stdout_eq_str("-2142");
}

Test(my_printf, test_flag_u, .init = redirect_stdout) {
    my_printf("%u", 42);

    cr_assert_stdout_eq_str("42");
}

Test(my_printf, test_flag_u_2, .init = redirect_stdout) {
    my_printf("%u", 748236);

    cr_assert_stdout_eq_str("748236");
}

Test(my_printf, test_flag_u_ZERO, .init = redirect_stdout) {
    my_printf("%u", 0);

    cr_assert_stdout_eq_str("0");
}

Test(my_printf, test_flag_double_u, .init = redirect_stdout) {
    my_printf("%u%u", 0,1);

    cr_assert_stdout_eq_str("01");
}

Test(my_printf, test_flag_u_string, .init = redirect_stdout) {
    my_printf("%u%s", 0, "efnbzfebi");

    cr_assert_stdout_eq_str("0efnbzfebi");
}

Test(my_printf, test_flag_u_string_hexa, .init = redirect_stdout) {
    my_printf("%u%s%x", 0, "efnbzfebi", 11);

    cr_assert_stdout_eq_str("0efnbzfebib");
}

Test(my_printf, test_flag_u_hexa, .init = redirect_stdout) {
    my_printf("%u%s%x", 0, "efnbzfebi", 14);

    cr_assert_stdout_eq_str("0efnbzfebie");
}

Test(my_printf, test_flag_u_hexa_maj, .init = redirect_stdout) {
    my_printf("%u%s%X", 0, "efnbzfebi", 14);

    cr_assert_stdout_eq_str("0efnbzfebiE");
}

Test(my_printf, test_flag_u_string_hexa_maj, .init = redirect_stdout) {
    my_printf("%u%s%X", 0, "efnbzfebi", 11);

    cr_assert_stdout_eq_str("0efnbzfebiB");
}

Test(my_printf, test_flag_u_double_hexa, .init = redirect_stdout) {
    my_printf("%u%X%X", 0, 11, 15);

    cr_assert_stdout_eq_str("0BF");
}

Test(my_printf, test_flag_u_octal, .init = redirect_stdout) {
    my_printf("%u%o", 0, 27);

    cr_assert_stdout_eq_str("033");
}

Test(my_printf, test_flag_u_double_octal, .init = redirect_stdout) {
    my_printf("%u%o%o", 0, 14, 17);

    cr_assert_stdout_eq_str("01621");
}

Test(my_printf, test_flag_dddd, .init = redirect_stdout) {
    my_printf("%d", 10);

    cr_assert_stdout_eq_str("10");
}

Test(my_printf, test_flag_ddd, .init = redirect_stdout) {
    my_printf("%d", -10);

    cr_assert_stdout_eq_str("-10");
}

Test(my_printf, test_flag_i1, .init = redirect_stdout) {
    my_printf("%i", -10);

    cr_assert_stdout_eq_str("-10");
}

Test(my_printf, test_flag_i2, .init = redirect_stdout) {
    my_printf("%i", -55985);

    cr_assert_stdout_eq_str("-55985");
}

Test(my_printf, test_flag_i3, .init = redirect_stdout) {
    my_printf("%i", 55985);

    cr_assert_stdout_eq_str("55985");
}

Test(my_printf, test_flag_i4, .init = redirect_stdout) {
    my_printf("%i", 10);

    cr_assert_stdout_eq_str("10");
}

Test(my_printf, test_flag_d2, .init = redirect_stdout) {
    my_printf("%d", -55985);

    cr_assert_stdout_eq_str("-55985");
}

Test(my_printf, test_flag_d3, .init = redirect_stdout) {
    my_printf("%d", 55985);

    cr_assert_stdout_eq_str("55985");
}

Test(my_printf, test_flag_d_i_s, .init = redirect_stdout) {
    my_printf("%d%i%s", 5, -7, "test");

    cr_assert_stdout_eq_str("5-7test");
}

Test(my_printf, test_flag_d_i_s2, .init = redirect_stdout) {
    my_printf("%d%i%s", -8, 9, "lavabo");

    cr_assert_stdout_eq_str("-89lavabo");
}

Test(my_printf, test_flag_d_i_s_XX, .init = redirect_stdout) {
    my_printf("%d%i%s%X%X", -8, 9, "lavabo", 10,10);

    cr_assert_stdout_eq_str("-89lavaboAA");
}

Test(my_printf, test_flag_d_i_s_xXx_percent, .init = redirect_stdout) {
    my_printf("%d%i%s%x%X%x%%", -8, 9, "lavabo", 10,10,11);

    cr_assert_stdout_eq_str("-89lavaboaAb%");
}

Test(my_printf, test_flag_d_i_percent, .init = redirect_stdout) {
    my_printf("%d%i%%", 49, -69);

    cr_assert_stdout_eq_str("49-69%");
}

Test(my_printf, test_flag_c, .init = redirect_stdout) {
    my_printf("%c", 'd');

    cr_assert_stdout_eq_str("d");
}

Test(my_printf, test_flag_c_maj, .init = redirect_stdout) {
    my_printf("%c", 'L');

    cr_assert_stdout_eq_str("L");
}

Test(my_printf, test_flag_c_maj25555, .init = redirect_stdout) {
    my_printf("%c%c", 'D','L');

    cr_assert_stdout_eq_str("DL");
}

Test(my_printf, test_flag_c_maj3, .init = redirect_stdout) {
    my_printf("%c%c", 'd','L');

    cr_assert_stdout_eq_str("dL");
}

Test(my_printf, test_flag_c_maj4, .init = redirect_stdout) {
    my_printf("%c%c", 'D','l');

    cr_assert_stdout_eq_str("Dl");
}

Test(my_printf, test_flag_c_maj4_percent, .init = redirect_stdout) {
    my_printf("%c%c%%", 'W','c');

    cr_assert_stdout_eq_str("Wc%");
}

Test(my_printf, test_flag_c_percent, .init = redirect_stdout) {
    my_printf("%c%%", 'd');

    cr_assert_stdout_eq_str("d%");
}

Test(my_printf, test_flag_c_string, .init = redirect_stdout) {
    my_printf("%c%s", 'O', "range");

    cr_assert_stdout_eq_str("Orange");
}

Test(my_printf, test_flag_c_hexa, .init = redirect_stdout) {
    my_printf("%c%X", 'N', 10);

    cr_assert_stdout_eq_str("NA");
}

Test(my_printf, test_flag_c_hexa2, .init = redirect_stdout) {
    my_printf("%c%x", 'C', 13);

    cr_assert_stdout_eq_str("Cd");
}

Test(my_printf, test_flag_c_hexa3, .init = redirect_stdout) {
    my_printf("%c%x", 'c', 11);

    cr_assert_stdout_eq_str("cb");
}

Test(my_printf, test_flag_octal_c, .init = redirect_stdout) {
    my_printf("%o%c", 17, 'B');

    cr_assert_stdout_eq_str("21B");
}

Test(my_printf, test_flag_octal_c_d_c, .init = redirect_stdout) {
    my_printf("%o%c%d%c", 29, 'B', 2, 'O');

    cr_assert_stdout_eq_str("35B2O");
}

Test(my_printf, test_flag_d_c_percent, .init = redirect_stdout) {
    my_printf("%d%c%%", 4, 'Y');

    cr_assert_stdout_eq_str("4Y%");
}

Test(my_printf, test_flag_d_c_percent2, .init = redirect_stdout) {
    my_printf("%d%c%%", 90, 'f');

    cr_assert_stdout_eq_str("90f%");
}

Test(my_printf, test_flag_d_c_percent3, .init = redirect_stdout) {
    my_printf("%s%s%c%s%c%s", "Mets ", "un grade ", 'B'," o",'u', " A");

    cr_assert_stdout_eq_str("Mets un grade B ou A");
}
