#include <bits/stdc++.h>
using namespace std;
union f
{
    int x, y;
};
int main()
{
    union f t;
    t.x = 10;
    cout << "x " << t.x << " y " << t.y << endl;
    t.y = 12;
    cout << "x " << t.x << " y " << t.y;

    return 0;
}