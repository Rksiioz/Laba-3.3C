#pragma once

#include "Object.h"

class Complex : public Object {
private:
    double x;
    double y;
public:
    Complex();
    Complex(double x, double y);
    Complex(const Complex& other);

    Complex& operator=(const Complex& other);
    friend istream& operator>>(istream& input, Complex& complex);
    friend ostream& operator<<(ostream& output, const Complex& complex);
    operator string() const;

    void Init(double x, double y);
    bool Read();
    void Display() const;
    string toString() const;

    Complex add(const Complex& complex);
    Complex mul(const Complex& complex);
    bool equ(const Complex& complex);

    friend Complex operator+(const Complex& complex1, const Complex& complex2);
    friend Complex operator*(const Complex& complex1, const Complex& complex2);
    friend bool operator==(const Complex& complex1, const Complex& complex2);

    double getX() const;
    double getY() const;
    void setX(const double& newX);
    void setY(const double& newY);
};
