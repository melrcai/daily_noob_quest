#include <iostream>
using std::cout;
using std::cin;

int main() {
    
    int num;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
      for (int j = 1; j <= num; j++) {
        cout << (i * j) << "\t";
      }
      cout << "\n";
    }
     
    return 0;
}