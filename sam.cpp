#include <bits/stdc++.h>
using namespace std;
class Shape
{
protected:
    int length, breadth;

public:
    Shape() { length = 0, breadth = 0; }
    Shape(int l, int b) : length(l), breadth(b) {}
    virtual void get_area() //this is function overriding;
    {
        cout << "Area of Shape " << length * breadth << endl;
    }
};
class Rectangle : public Shape
{
public:
    Rectangle() : Shape() {}
    Rectangle(int k, int b) : Shape(k, b) {}
    void get_area()
    {
        cout << "Area of rectangle " << length * breadth << endl;
    }
};
class triangle : public Shape
{
public:
    triangle(int l, int b) : Shape(l, b) {}
    void get_area()
    {
        cout << "Area of Triangle " << (length * breadth) / 2 << endl;
    }
};
int main()
{
    Shape *s;
    Rectangle r(10, 5);
    triangle t(10, 10);
    s = &r;
    s->get_area();
    s = &t;
    s->get_area();
    return 0;
}
