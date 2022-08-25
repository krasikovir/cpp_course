#include <cstddef> // size_t
#include <cstring> // strlen, strcpy
struct String {
	String(const char *str = "");
	String(size_t n, char c);
	~String();


    /* Реализуйте этот метод. */
	void append(String &other)
    {
        size_t k = 0;
        size_t c = 0;
        k = strlen(str);
        c = strlen(other.str);
        char* d = new char[k + c + 1];
        for (size_t i = 0; i != k; i++)
        {
            d[i] = str[i];
        }
        for (size_t i = k; i != k + c; i++)
        {
            d[i] = *(other.str + i - k);
        }
        d[k + c] = '\0';
        size = k + c;
        delete[] str;
        str = d;
    }

	size_t size;
	char *str;
};