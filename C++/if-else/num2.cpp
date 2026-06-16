#include <iostream>
using namespace std;

bool dateIsBefore(int a_month, int a_day, int b_month, int b_day);

int main() {
    
    bool result;
    int a_month;
    int a_day;
    int b_month;
    int b_day;

    cout << "Enter the first date (month day): ";
    cin >> a_month >> a_day;
    cout << "Enter the second date (month day): ";
    cin >> b_month >> b_day;

    result = dateIsBefore(a_month, a_day, b_month, b_day);

    if (result == true) {
      cout << a_month << " " << a_day << " comes before " << b_day << " " << b_month << endl;
    } else {
      cout << a_month << " " << a_day << " does not come before " << b_day << " " << b_month << endl;
    }
    
    return 0;
}

bool dateIsBefore(int a_month, int a_day, int b_month, int b_day) {
  if (a_month < b_month || (a_month == b_month && a_day < b_day)) {
    return true;
  } else {
    return false;
  }
}

