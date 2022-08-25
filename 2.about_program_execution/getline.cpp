#include <iostream>
using namespace std;
char* getline()
{
    int i = 0;
    char c;
    char* tmp = new char[1];
    while (cin.get(c) && c != '\n')
    {
        i++;
        tmp[i - 1] = c;
        char* new_tmp = new char[i + 1];
        for (int j = 0; j < i; j++)
        {
            new_tmp[j] = tmp[j];
        }
        delete [] tmp;
        tmp = new_tmp;
    }
    tmp[i] = '\0';
    return tmp;
}