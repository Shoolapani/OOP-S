#include <bits/stdc++.h>
using namespace std;

class satyam_kiit
{
protected:
    int id = 1707141;

public:
    virtual void get()
    {
        cout << "the id is " << id << endl;
    }
};

class satyam_kpit : public satyam_kiit
{
    int id_1 = 144795;

public:
    void get()
    {
        cout << "the id is " << id << endl;
        cout << "the id in KPIT is:  " << id_1
             << endl;
    }
};

int main()
{

    satyam_kiit *s;
    satyam_kpit s_p;

    s = &s_p;
    s->get();
    return 0;
}