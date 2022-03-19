#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class A
{
    int c;
    friend class B;

public:
    A() { c = 9; }
};

class B
{
public:
    void show(A &a)
    {

        cout << a.c << endl;
    }
};

int main()
{
    // A g;

    // B f;
    // f.show(g);


    return 0;
}