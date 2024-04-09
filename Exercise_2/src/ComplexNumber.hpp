#ifndef __COMPLEX_H
#define __COMPLEX_H

#include <iostream>
using namespace std;

namespace ComplexLibrary{

 struct Complex
 {
    int real;
    int imaginary;

    Complex(int a,int b) //Constructor to initialize the real and the imaginary parts of a complex number
        {
        real = a,
        imaginary = b;
        };

    Complex() = default; //Default constructor

    Complex(double a,double b) //Overloading of the constructor to initialize parameters with a different type
       {
        real = a,
        imaginary = b;
        };
 };

ostream& operator<<(ostream& os, const Complex &z);

Complex operator+(const Complex &z1, const Complex &z2);

bool operator==(const Complex &z1, const Complex &z2);

Complex to_conjugate(const Complex &z);


}

#endif
