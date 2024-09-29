
#include <iostream>
#include <cmath>
using namespace std;

double h(const double a, const double b);

int main() {
    double s, t;

    cout << "s = "; cin >> s;
    cout << "t = "; cin >> t;

    double n = h(t * t, 1) * h(t * t, 1) * h(t * t, 1) + h(1, t * (s * s));
    double d = 1 + h(s, t) * h(s, t);
    double result = n / d;

    cout << "Result = " << result << endl;

    return 0;
}

double h(const double a, const double b) {
    return (a * a) * sin(b) + (b * b) * cos(a);
}
