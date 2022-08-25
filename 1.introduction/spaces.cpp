#include <iostream>
int main() {
    char c = '\0';
    bool flag = 1;
    while (std::cin.get(c)) {
        if (c != ' ') flag = 1;
        if (flag) std::cout << c;
        if (c == ' ') flag = 0;
        
    }
    return 0;
}