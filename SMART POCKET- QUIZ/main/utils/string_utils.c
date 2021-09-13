char *int_to_4_char_string(int count)
{
    char *result = malloc(15);
    if (count < 10)
    {
        sprintf(result, "000%d", count);
    }
    else if (count < 100)
    {
        sprintf(result, "00%d", count);
    }
    else if (count < 1000)
    {
        sprintf(result, "0%d", count);
    }
    else
    {
        sprintf(result, "%d", count);
    }
    return result;
}

char *int_to_6_char_string(int count)
{
    char *result = malloc(17);
    if (count < 10)
    {
        sprintf(result, "00000%d", count);
    }
    else if (count < 100)
    {
        sprintf(result, "0000%d", count);
    }
    else if (count < 1000)
    {
        sprintf(result, "000%d", count);
    }
    else if (count < 10000)
    {
        sprintf(result, "00%d", count);
    }
    else if (count < 100000)
    {
        sprintf(result, "0%d", count);
    }
    else
    {
        sprintf(result, "%d", count);
    }
    return result;
}

static unsigned char hexdigit2int(unsigned char xd)
{
    if (xd <= '9')
        return xd - '0';
    xd = tolower(xd);
    if (xd == 'a')
        return 10;
    if (xd == 'b')
        return 11;
    if (xd == 'c')
        return 12;
    if (xd == 'd')
        return 13;
    if (xd == 'e')
        return 14;
    if (xd == 'f')
        return 15;
    return 0;
}

char *hex_to_string(uint8_t *value, uint16_t len, int start)
{
    char w_buffer[48] = "";
    char *w_address;

    for (int ii = start; ii < len; ii++)
    {
        sprintf(w_buffer + strlen(w_buffer), "%x", value[ii]);

        char st[100];
        for (int i = 0; i < strlen(w_buffer); i++)
        {
            if (w_buffer[i] < '0' || w_buffer[i] > '255')
            {
            }
            else
            {
                st[i] = w_buffer[i];
            }
        }

        const char *src = st;
        char *text = malloc(sizeof(char) * sizeof(st));

        w_address = (char *)malloc((sizeof(st)) * sizeof(char));

        char *dst = text;
        while (*src != '\0')
        {
            const unsigned char high = hexdigit2int(*src++);
            const unsigned char low = hexdigit2int(*src++);
            *dst++ = (high << 4) | low;
        }
        *dst-- = '\0';
        *dst-- = '\0';

        strcpy(w_address, text);
        if (ii == len - 1)
        {
            printf("\nConverted '%s', got '%s'\n", st, text);
            return text;
        }
    }

    return "";
}
