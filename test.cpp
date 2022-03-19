#include <bits/stdc++.h>
using namespace std;

class Complex
{

    int real, imag;

public:
    Complex()
    {
        real = 0, imag = 0;
    }
    Complex(int r, int i)
    {
        real = r, imag = i;
    }

    void print_all()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex operator+(Complex c)
    {
        Complex t;
        t.real = real + c.real;
        t.imag = imag + c.imag;

        return t;
    }
};

int main()
{

    Complex c1(2, 2);
    c1.print_all();
    Complex c3(3, 3);
    c3.print_all();
    Complex c2(5, 5);
    c2.print_all();

    Complex c4;
    c4 = c1 + c2; //c4=c1.add(c2);

    c4.print_all();

    return 0;
}