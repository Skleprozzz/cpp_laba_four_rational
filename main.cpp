#include "rational.h"

int main(int argc, char const *argv[])
{
    Rational a, b, c, d = 1.5;
    c = Rational(1, 4);
    cin >> a;
    cin >> b;
    cout << a << endl;
    cout << b << endl;
    cout << a + b << endl;
    cout << d * c << endl;
    return 0;
}
