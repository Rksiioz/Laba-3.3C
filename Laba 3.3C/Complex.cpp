#include "Complex.h"

using namespace std;

Complex::Complex() : x(0), y(0) {}

Complex::Complex(double x, double y) : x(x), y(y) {}

Complex::Complex(const Complex& other) : x(other.x), y(other.y) {}

Complex& Complex::operator=(const Complex& other) {
    if (this != &other) {
        x = other.x;
        y = other.y;
    }
    return *this;
}

istream& operator>>(istream& input, Complex& complex) {
    input >> complex.x >> complex.y;
    return input;
}

ostream& operator<<(ostream& output, const Complex& complex) {
    output << complex.x << " + " << complex.y << "i";
    return output;
}

string Complex::toString() const {
    return to_string(x) + " + " + to_string(y) + 'i';
}

void Complex::Init(double x, double y) {
    this->x = x;
    this->y = y;
}

bool Complex::Read() {
    cout << "Enter x: "; cin >> x;
    cout << "Enter y: "; cin >> y;

    if(cin.fail()) {
        cout << endl << "Entered values are not valid!" << endl;
        cin.clear();
        return false;
    }

    return true;
}

void Complex::Display() const {
    cout << this->toString() << endl;
}

Complex Complex::add(const Complex& complex) {
    return Complex(x + complex.x, y + complex.y);
}

Complex Complex::mul(const Complex& complex) {
    return Complex(x * complex.x - y * complex.y, x * complex.y + complex.x * y);
}

bool Complex::equ(const Complex& complex) {
    return x == complex.x && y == complex.y;
}

Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.x + c2.x, c1.y + c2.y);
}

Complex operator*(const Complex& c1, const Complex& c2) {
    return Complex(c1.x * c2.x - c1.y * c2.y, c1.x * c2.y + c1.y * c2.x);
}

bool operator==(const Complex& c1, const Complex& c2) {
    return c1.x == c2.x && c1.y == c2.y;
}

double Complex::getX() const {
    return x;
}

double Complex::getY() const {
    return y;
}

void Complex::setX(const double& newX) {
    x = newX;
}

void Complex::setY(const double& newY) {
    y = newY;
}

Complex::operator string() const {
    return toString();
}
