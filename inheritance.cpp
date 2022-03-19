#include <bits/stdc++.h>
using namespace std;

//Base class
class Parent
{
	public:
	int id_p;
};

// Sub class inheriting from Base Class(Parent)
class Child : public Parent
{
	public:
	int id_c;
};

//main function
int main()
{
	
		Child c;
		
		// An object of class child has all data members
		// and member functions of class parent
		c.id_c = 7;
		c.id_p = 91;
		cout << "Child id is " << c.id_c << endl;
		cout << "Parent id is " << c.id_p << endl;
		
		return 0;
}
