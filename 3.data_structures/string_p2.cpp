#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {

    /* Реализуйте этот конструктор */
	String(size_t n, char c)
    {
        size = n;
        char* newstr = new char[n + 1];
        for (int i = 0; i != n; i++) newstr[i] = c;
        this -> str = newstr;
    }

    /* и деструктор */
	~String()
    {
        delete[] str;
    }


	size_t size;
	char *str;
};