#include <iostream>
using namespace std;

int _strstr(const char *text, const char *pattern)
{
    if (*pattern == '\0') return 0;
    else if (*text == '\0' && *pattern != '\0') return -1;
    else 
    {
        const char* ptst = pattern;
        int a = 0,b = 0;
        while(*text)
        {
            while(*text == *pattern)
            {
                text++;
                pattern++;
                b++;
                if (*text == '\0' && *pattern != '\0') return -1;
                else if (*text == '\0' && *pattern == '\0' || *text != '\0' && *pattern == '\0') return a;
            }
            if (b != 0)
            {
                pattern = ptst;
                a+=b;
                b = 0;
            }
            else
            {
                a++;
                text++;
            }
        }
        return -1;
     }        
}