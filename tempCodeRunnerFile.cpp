#include <iostream>
using namespace std;
int main()
{
    int num, den, res;
    cout << "Enter the  numerator and  denominator : ";
    cin >> num >> den;
    //We use the try block to test some code, in which error probability is there 
    try
    {
        if (den == 0)
        {
            throw den;//throw error.
        }
        // cout << "the result " << num / den;
        throw 9.0;
    }
    catch (int e)
    {
        cout << "Divide by zero not poss."<< endl;
    }
    //this is catch all ,catch all data types beside int. 
    catch (...)
    {
        cout << "By default "<<num/den << endl;
    }
    return 0;
}