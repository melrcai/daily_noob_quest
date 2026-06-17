#include <iostream>
using namespace std;

void mystery(int n) {
    cout << n << " ";
    if (n > 0) {
        n = n - 5;
    }

    if (n < 0) {
        n = n + 7;
    } else {
        n = n * 2;
    }
    cout << n << endl;
}

int main() {
    
mystery(8); // 8 3
mystery(-3); // -3 4
mystery(1); // 1 2
mystery(0); // 0 0

    return 0;
}