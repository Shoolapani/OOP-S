#include <bits/stdc++.h>
using namespace std;
void v(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << (*(a + i)) << endl;
    }
}

int main()
{

    int a[3]{1, 2, 3};
    v(a,3);
    return 0;
}