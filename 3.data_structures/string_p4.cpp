#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	~String();


    /* Реализуйте конструктор копирования */
	String(const String &other)
    {
            size = other.size;
            char* newstr = new char [size + 1];
            for (int i = 0; i != size; i++) newstr[i] = other.str[i];
            newstr[size] = '\0';
            str = newstr;
    }


	void append(const String &other);

	size_t size;
	char *str;
};