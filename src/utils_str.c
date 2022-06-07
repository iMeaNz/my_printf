/*
** EPITECH PROJECT, 2021
** B-PSU-100-STG-1-1-myprintf-mehdy.morvan
** File description:
** Utilitary function for strings
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n) {
        if (src[i] == '\0') {
            dest[i] = '\0';
            return dest;
        }
        dest[i] = src[i];
        i++;
    }
    return dest;
}

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}

char *my_strcat(char *dest, char const *src)
{
    int dest_len = my_strlen(dest);
    int i = 0;

    while (src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';

    return dest;
}

int my_swap_char(char *a, char *b)
{
    char tmp = *a;
    *a = *b;
    *b = tmp;
    return 0;
}

char *my_revstr(char *str)
{
    int length = my_strlen(str);

    for (int i = 0; i < length / 2; i++) {
        my_swap_char(&str[i], &str[length - i - 1]);
    }

    return str;
}
