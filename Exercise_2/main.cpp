#include <iostream>
#include "src/ComplexNumber.hpp"

using namespace std;
using namespace ComplexLibrary;

int main()
{

    Complex z1(0,1);
    Complex z2;

    cout << "z1:" << z1 << endl;
    cout << "z2:" << z2 << endl;

    if (z1 == z2)
        cout << "z1 is equal to z2" << endl;
    else cout << "z1 is NOT equal to z2" << endl;

    Complex sum = z1 + z2;
    cout << "z1 + z2: " << sum << endl;

    Complex z1_cong = to_conjugate(z1);
    cout << "z1_cong: " << z1_cong << endl;

    return 0;
}
