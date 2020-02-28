#include <iostream>
using namespace std;
class Complex {
private:
	double re, im;
public:
	Complex(double r = 0, double i = 0) : re(r), im(i){ }
	//Complex(const Complex& C) : re(C.re), im(C.im) { }
public:
	Complex operator + (Complex C);	
	Complex operator - (Complex C);		
	Complex operator * (Complex C); 	
	Complex operator / (Complex C);		
	Complex operator += (Complex C);
	Complex operator -= (Complex C);
public:
	friend ostream& operator << (ostream& out, const Complex& C) {
		return out << "(" << C.re << ", " << C.im << "i) ";
	}
};
Complex Complex::operator + (Complex C) {
	return Complex(this->re + C.re, this->im + C.im);
}
Complex Complex::operator - (Complex C) {
	return Complex(this->re - C.re, this->im - C.im);
}
Complex Complex::operator * (Complex C) {
	return Complex(this->re * C.re - this->im * C.im, this->re * C.im + this->im * C.re);
}
Complex Complex::operator / (Complex C) {
	double tmp = C.re * C.re + C.im * C.im;
	return Complex((this->re * C.re + this->im * C.im) / tmp, (-this->re * C.im + this->im * C.re) / tmp);
}

int main() {
	Complex y(-5.5, 4);
	Complex z(1, 2);
	double a = 3;
	cout << y << " + " << z <<"+"<< a <<" = "<< y + z + a << endl;
	cout << y << " - " << z << " = " << y - z << endl;
	cout << y << " * " << z << " = " << y * z << endl;
	cout << y << " / " << z << " = " << y / z << endl;
	system("PAUSE");
	return 0;
}

