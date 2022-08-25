int power_(int x, unsigned p) {
    if (p == 0) return 1;
    return x*power_(x,p - 1);
}
#include <iostream>
int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i != n; i ++) {
        int k, j = 0;
        std::cin >> k;
        while (k >= power_(2,j)) j++;
        std::cout << j - 1 << std::endl;
        j = 0;
    }
    return 0;
}