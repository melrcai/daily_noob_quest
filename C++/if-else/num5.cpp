#include <iostream>
using namespace std;

double quadrant (const double &x, const double &y);

int main() {
    double x = 0.0; 
    double y = 3.14;

    cout << quadrant(x, y) << endl;

    return 0;
}

double quadrant (const double &x, const double &y) {
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


// const added to read and not to modify the values of x and y
// without const, the function would be able to modify the values of x and y, which is not desired in this case. The function is only meant to determine the quadrant based on the input values, not change them