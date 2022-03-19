#include <bits/stdc++.h>
using namespace std;

class constructor
{
    int x, y;

public:
    constructor() : x(0), y(0) {}
    constructor(int i, int j) : x(i), y{j} {}
    constructor(const constructor &c)
    {
        x = c.x, y = c.y;
    }
    void get()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{

    constructor c1(10, 8);
    constructor c2=c1;
    c2.get();
    return 0;
}