#pragma once
#include <fstream>
using namespace std;

class Complex
{
private:
    double re_;
    double im_;
public:
    Complex();
    explicit Complex(double re, double im = 0);
    Complex(const Complex&);
    Complex& operator=(const Complex&);

    friend istream& operator>>(istream&, Complex&);
    double re() const;
    double im() const;
    double length() const;
};

Complex operator*(Complex&, double&);
Complex operator+(Complex&, Complex&);
Complex operator*(Complex&, Complex&);
ostream& operator<<(std::ostream&, const Complex&);