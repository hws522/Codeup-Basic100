#include<iostream>

using namespace std;

int main()
{
   
   long long int a, b;
   double c;

   cin >> a >> b;
   c = (double)a/b;

   cout << a + b << endl;
   cout << a - b << endl;
   cout << a * b << endl;
   cout << a / b << endl;
   cout << a % b << endl;

   cout <<fixed;
   cout.precision(2);
   cout << c << endl;

   

   return 0;
}