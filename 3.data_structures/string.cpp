#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {

    /* Реализуйте этот конструктор */
	String(const char *str = "")
    {
        int k = 0;
        for (int i = 0; *(str + i); i++) k++;
        char* newstr = new char[k + 1];
        for (int i = 0; i != k; i++) newstr[i] = str[i];
        newstr[k] = '\0';
        size = k;
        this -> str = newstr;
        
    }

	size_t size;
	char *str;
};