/*
** EPITECH PROJECT, 2021
** B-PSU-100-STG-1-1-myprintf-mehdy.morvan
** File description:
** Utilitary function for strings
*/

void my_putchar(char c);

int my_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s1[i] == s2[i]) {
        i++;
    }
    return s1[i] - s2[i];
}

int my_putstr(char const *str)
{
    int i = 0;

    if (str == 0)
        return 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int check_if_float(char *float_str)
{
    for (int i = 0; float_str[i] != '\0'; ++i) {
        if (float_str[i] == '.')
            return 1;
    }
    return 0;
}
