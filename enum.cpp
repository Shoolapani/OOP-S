#include <bits/stdc++.h>
using namespace std;

enum week
{
    sun,
    mon,
    wed,
    thur,
    fri,
    sat
};

int main()
{

    for (int i = sun; i <= sat; i++)
    {
        cout << i + 1 << " ";
    }

    return 0;
}