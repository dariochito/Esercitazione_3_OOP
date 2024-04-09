#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;

namespace ComplexLibrary{ //I create a new library to avoid name clashes

    Complex operator+(const Complex &z1, const Complex &z2) //Overloading of the sum operator
    {
        Complex z(z1.real + z2.real,z1.imaginary + z2.imaginary);
    return z;
    }

    bool operator==(const Complex &z1, const Complex &z2) //Overloading of the logical and operator
    {
        if (z1.real == z2.real && z1.imaginary == z2.imaginary)
            return true;
        else return false;
    }

    ostream& operator<<(ostream& os, const Complex &z) //Overloading of the ostream operator
    {
        if(z.real == 0 && z.imaginary == 0)
            os << 0;
        else if (z.real != 0 && z.imaginary == 0)
            os << z.real;
        else if (z.real == 0 && z.imaginary != 0)
            os << z.imaginary << "i";
        else  os << z.real << (z.imaginary > 0 ? " + " : " - ") << abs(z.imaginary) << "i"; //Ternary conditional operator ('?:')

        return os;
    }

    Complex to_conjugate(const Complex &z) //Function that compute the complex conjugate of a complex number
    {
        Complex z_conjugate = Complex(z.real,-z.imaginary);
        return z_conjugate;
    }


}

