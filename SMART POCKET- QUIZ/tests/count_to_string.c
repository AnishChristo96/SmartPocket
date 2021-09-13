#include <stdio.h>
#include <stdlib.h>

#include "../main/utils/string_utils.c"

int main(int argc, char *argv[])
{
    char *result = count_to_4_char_string(9);
    printf("%s\n", result);
    result = count_to_4_char_string(99);
    printf("%s\n", result);
    result = count_to_4_char_string(999);
    printf("%s\n", result);
    result = count_to_4_char_string(9999);
    printf("%s\n", result);

    result = count_to_6_char_string(9);
    printf("%s\n", result);
    result = count_to_6_char_string(99);
    printf("%s\n", result);
    result = count_to_6_char_string(999);
    printf("%s\n", result);
    result = count_to_6_char_string(9999);
    printf("%s\n", result);
    result = count_to_6_char_string(99999);
    printf("%s\n", result);
    result = count_to_6_char_string(999999);
    printf("%s\n", result);

    return 0;
}
