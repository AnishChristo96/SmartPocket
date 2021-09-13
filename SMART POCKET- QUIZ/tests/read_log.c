#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *rl = "0019 Thu Jan  1 05:30:28 1970";
    printf("%s\n\n", rl);
    printf("%d\n\n", strlen(rl));

    for (int i = 0; i < strlen(rl); i++)
    {
        printf("%d %c\n", i, rl[i]);
    }

    return 0;
}
