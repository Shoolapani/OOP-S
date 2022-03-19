#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main()
{
     char s[100], s1[100];
     char vec[1000];
     string f;
     cout << "Enter the name and age " << endl;
     cin.getline(s, 100);

     ofstream myfile_demo("xyz.txt", ios::app);
     myfile_demo << s;
     myfile_demo.close();
     cout << "File Write operation Successfull" << endl
          << endl;

     fstream obj("xyz.txt");
     obj.getline(s1, 100);
     cout << "File read successfull " << s1 << endl
          << endl;
     obj.close();

     // fstream o1("satyam.pdf");
     // o1.getline(vec, 1000);
     
     cout << vec << endl;

     return 0;
}