#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i != n; i ++) {
        int k,m;
        std::cin >> k >> m;
        std::cout << k + m << "\n";
     }
    return 0;
}