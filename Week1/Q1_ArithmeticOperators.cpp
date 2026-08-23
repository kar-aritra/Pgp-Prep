// Given two integer variables x and y. You need to perform the following operations:

// p = x + y, Addition
// q = x - y, Subtraction
// r = x * y, Multiplication
// s = x / y, Division
// t = x % y, Modulo

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    // code here
    int p = x+y; int q = x-y; int r = x*y; double s =double( x)/y; int t = x/y;
    int u =x%y;

    cout << p << " " << q << " " << r << " " << fixed << setprecision(3) << s << " "
         << t << " " << u;

    return 0;
}