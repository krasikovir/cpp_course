unsigned strlen(const char *str)
{
    int len = 0;
    while (*str++) len++;
    return (unsigned)len;
}
