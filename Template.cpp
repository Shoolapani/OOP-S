#include <bits/stdc++.h>
using namespace std;

template <typename t>
t greater_1(t a, t b)
{

    return (a > b) ? a : b;
}

template <class k>
void func(k a)
{
    cout << "Default template is called " << a << endl;
}

template <> //template specialization
void func(double f)
{
    cout << "Template specialization is called for double " << f << endl;
}
int main()
{

    cout << greater_1(1, 2) << endl;
    cout << greater_1('a', 'b') << endl;
    cout << greater_1(2.90, 4.56) << endl;
    func('g');
    func(1);
    func(2.90);

    return 0;
}   