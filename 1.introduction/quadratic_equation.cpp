#include <iostream>
#include <cmath>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    int d = b*b - 4*a*c;
    if (d < 0) std::cout << "No real roots";
    else std::cout << (-b - sqrt(d))/(2*a) << " " << (-b + sqrt(d))/(2*a); 
    return 0;
}