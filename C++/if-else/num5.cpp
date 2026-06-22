#include <iostream>
using namespace std;

double quadrant (double &x, double &y);

int main() {
    double x, y;

    cout << "Enter coordinates: " << endl;
    cout << "x = ";
    cin >> x; 
    cout << "y = ";
    cin >> y;

    cout << quadrant(x, y);

    return 0;
}

double quadrant (double &x, double &y) {
    if (x > 0 && y > 0) {
        return 1;
    } else if (x < 0 && y > 0) {
        return 2;
    } else if (x < 0 && y < 0) {
        return 3;
    } else if (x > 0 && y < 0) {
        return 4;
    } else if (x == 0 && y > 0) {
        return 0;
    } else if (x > 0 && y == 0) {
        return 0;
    } else {
        return 0;
    }
}

// there's still sumthing to fix from the ff. given instr.