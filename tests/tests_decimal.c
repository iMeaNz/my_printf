/*
** EPITECH PROJECT, 2021
** B-PSU-100-STG-1-1-myprintf-mehdy.morvan
** File description:
** Test for the decimals flags
*/

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_printf(char *str, ...);

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, decimal_pos, .init = redirect_all_std)
{
    my_printf("%d", 10);
    cr_assert_stdout_eq_str("10");
}

Test(my_printf, decimal_neg, .init = redirect_all_std)
{
    my_printf("%d", -10);
    cr_assert_stdout_eq_str("-10");
}

Test(my_printf, decimal_with_minus, .init = redirect_all_std)
{
    my_printf("%-d", 10);
    cr_assert_stdout_eq_str("10");
}

Test(my_printf, decimal_with_0, .init = redirect_all_std)
{
    my_printf("%0d", 10);
    cr_assert_stdout_eq_str("10");
}

Test(my_printf, decimal_pos_with_plus, .init = redirect_all_std)
{
    my_printf("%+d", 10);
    cr_assert_stdout_eq_str("+10");
}

Test(my_printf, decimal_neg_with_plus, .init = redirect_all_std)
{
    my_printf("%+d", -10);
    cr_assert_stdout_eq_str("-10");
}

Test(my_printf, decimal_pos_with_space, .init = redirect_all_std)
{
    my_printf("% d", 10);
    cr_assert_stdout_eq_str(" 10");
}

Test(my_printf, decimal_neg_with_space, .init = redirect_all_std)
{
    my_printf("% d", -10);
    cr_assert_stdout_eq_str("-10");
}

Test(my_printf, decimal_with_hash, .init = redirect_all_std)
{
    my_printf("%#d", 10);
    cr_assert_stdout_eq_str("10");
}

Test(my_printf, decimal_with_fw, .init = redirect_all_std)
{
    my_printf("%10d", 10);
    cr_assert_stdout_eq_str("        10");
}

Test(my_printf, decimal_pos_with_minus_plus, .init = redirect_all_std)
{
    my_printf("%-+d", 10);
    cr_assert_stdout_eq_str("+10");
}

Test(my_printf, decimal_neg_with_minus_plus, .init = redirect_all_std)
{
    my_printf("%-+d", -10);
    cr_assert_stdout_eq_str("-10");
}

Test(my_printf, decimal_pos_with_minus_plus_zero, .init = redirect_all_std)
{
    my_printf("%-+0d", 10);
    cr_assert_stdout_eq_str("+10");
}

Test(my_printf, decimal_neg_with_minus_plus_zero, .init = redirect_all_std)
{
    my_printf("%+-0d", -10);
    cr_assert_stdout_eq_str("-10");
}

Test(my_printf, decimal_pos_with_minus_plus_zero_space, .init = redirect_all_std)
{
    my_printf("%+-0 d", 10);
    cr_assert_stdout_eq_str("+10");
}

Test(my_printf, decimal_neg_with_minus_plus_zero_space, .init = redirect_all_std)
{
    my_printf("%+-0 d", -10);
    cr_assert_stdout_eq_str("-10");
}

Test(my_printf, decimal_pos_with_minus_plus_zero_space_hash, .init = redirect_all_std)
{
    my_printf("%+-0 #d", 10);
    cr_assert_stdout_eq_str("+10");
}

Test(my_printf, decimal_neg_with_minus_plus_zero_space_hash, .init = redirect_all_std)
{
    my_printf("%+-0 #d", -10);
    cr_assert_stdout_eq_str("-10");
}

Test(my_printf, decimal_pos_with_minus_plus_zero_space_hash_fw, .init = redirect_all_std)
{
    my_printf("%+-0 #10d", 10);
    cr_assert_stdout_eq_str("+10       ");
}

Test(my_printf, decimal_neg_with_minus_plus_zero_space_hash_fw, .init = redirect_all_std)
{
    my_printf("%+-0 #10d", -10);
    cr_assert_stdout_eq_str("-10       ");
}

Test(my_printf, decimal_pos_with_minus_space, .init = redirect_all_std)
{
    my_printf("%- d", 10);
    cr_assert_stdout_eq_str(" 10");
}

Test(my_printf, decimal_neg_with_minus_space, .init = redirect_all_std)
{
    my_printf("%- d", -10);
    cr_assert_stdout_eq_str("-10");
}

Test(my_printf, decimal_pos_with_minus_space_hash, .init = redirect_all_std)
{
    my_printf("%- #d", 10);
    cr_assert_stdout_eq_str(" 10");
}

Test(my_printf, decimal_neg_with_minus_space_hash, .init = redirect_all_std)
{
    my_printf("%- #d", -10);
    cr_assert_stdout_eq_str("-10");
}

Test(my_printf, decimal_pos_with_minus_space_hash_fw, .init = redirect_all_std)
{
    my_printf("%- #10d", 10);
    cr_assert_stdout_eq_str(" 10       ");
}

Test(my_printf, decimal_neg_with_minus_space_hash_fw, .init = redirect_all_std)
{
    my_printf("%- #10d", -10);
    cr_assert_stdout_eq_str("-10       ");
}

Test(my_printf, decimal_pos_with_minus_hash, .init = redirect_all_std)
{
    my_printf("%-#d", 10);
    cr_assert_stdout_eq_str("10");
}

Test(my_printf, decimal_neg_with_minus_hash, .init = redirect_all_std)
{
    my_printf("%-#d", -10);
    cr_assert_stdout_eq_str("-10");
}

Test(my_printf, decimal_pos_with_minus_hash_fw, .init = redirect_all_std)
{
    my_printf("%-#10d", 10);
    cr_assert_stdout_eq_str("10        ");
}

Test(my_printf, decimal_neg_with_minus_hash_fw, .init = redirect_all_std)
{
    my_printf("%-#10d", -10);
    cr_assert_stdout_eq_str("-10       ");
}

Test(my_printf, decimal_pos_with_minus_fw, .init = redirect_all_std)
{
    my_printf("%-10d", 10);
    cr_assert_stdout_eq_str("10        ");
}

Test(my_printf, decimal_neg_with_minus_fw, .init = redirect_all_std)
{
    my_printf("%-10d", -10);
    cr_assert_stdout_eq_str("-10       ");
}

Test(my_printf, decimal_pos_with_plus_zero, .init = redirect_all_std)
{
    my_printf("%+0d", 10);
    cr_assert_stdout_eq_str("+10");
}

Test(my_printf, decimal_neg_with_plus_zero, .init = redirect_all_std)
{
    my_printf("%+0d", -10);
    cr_assert_stdout_eq_str("-10");
}

Test(my_printf, decimal_pos_with_plus_zero_space, .init = redirect_all_std)
{
    my_printf("%+0 d", 10);
    cr_assert_stdout_eq_str("+10");
}

Test(my_printf, decimal_neg_with_plus_zero_space, .init = redirect_all_std)
{
    my_printf("%+0 d", -10);
    cr_assert_stdout_eq_str("-10");
}

Test(my_printf, decimal_pos_with_plus_zero_space_hash, .init = redirect_all_std)
{
    my_printf("%+0 #d", 10);
    cr_assert_stdout_eq_str("+10");
}

Test(my_printf, decimal_neg_with_plus_zero_space_hash, .init = redirect_all_std)
{
    my_printf("%+0 #d", -10);
    cr_assert_stdout_eq_str("-10");
}

Test(my_printf, decimal_pos_with_plus_zero_space_hash_fw, .init = redirect_all_std)
{
    my_printf("%+0 #10d", 10);
    cr_assert_stdout_eq_str("+000000010");
}

Test(my_printf, decimal_neg_with_plus_zero_space_hash_fw, .init = redirect_all_std)
{
    my_printf("%+0 #10d", -10);
    cr_assert_stdout_eq_str("-000000010");
}

Test(my_printf, decimal_pos_with_zero_space, .init = redirect_all_std)
{
    my_printf("%0 d", 10);
    cr_assert_stdout_eq_str(" 10");
}

Test(my_printf, decimal_neg_with_zero_space, .init = redirect_all_std)
{
    my_printf("%0 d", -10);
    cr_assert_stdout_eq_str("-10");
}

Test(my_printf, decimal_pos_with_zero_fw, .init = redirect_all_std)
{
    my_printf("%010d", 10);
    cr_assert_stdout_eq_str("0000000010");
}

Test(my_printf, decimal_neg_with_zero_fw, .init = redirect_all_std)
{
    my_printf("%010d", -10);
    cr_assert_stdout_eq_str("-000000010");
}

Test(my_printf, decimal_pos_with_zero_space_hash, .init = redirect_all_std)
{
    my_printf("%0 #d", 10);
    cr_assert_stdout_eq_str(" 10");
}

Test(my_printf, decimal_neg_with_zero_space_hash, .init = redirect_all_std)
{
    my_printf("%0 #d", -10);
    cr_assert_stdout_eq_str("-10");
}

Test(my_printf, decimal_pos_with_zero_space_fw, .init = redirect_all_std)
{
    my_printf("%0 #10d", 10);
    cr_assert_stdout_eq_str(" 000000010");
}

Test(my_printf, decimal_neg_with_zero_space_fw, .init = redirect_all_std)
{
    my_printf("%0 #10d", -10);
    cr_assert_stdout_eq_str("-000000010");
}







//Basic tests
/*
%d
%-d
%0d
%+d
% d
%#d
%10d
*/

//Mixed tests
/*
%-+d
%-+0d
%-+0 d
%-+0 #d
%-+0 #10d
%-0d
%-0 d
%-0 #d
%-0 #10d
%- d
%- #d
%- #10d
%-#d
%-#10d
%-10d
%+0d

%+0 d
%+0 #d
%+0 #10d

%0 d
%0 #d
%0 #10d
% #d
% #10d
%#10d

*/
