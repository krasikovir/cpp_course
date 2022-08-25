#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;
    if (k != 0) {
        main();
        cout << k << " ";
    }
	return 0;
}