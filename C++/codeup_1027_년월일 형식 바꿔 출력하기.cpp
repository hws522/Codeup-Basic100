#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
   
   int a, b, c;
   char x;

   cin >> a >> x >> b >> x >> c;

   x = '-';

   cout.width(2);
   cout.fill('0');
   cout << c << x;

   cout.width(2);
   cout.fill('0');
   cout << b << x; 

   cout.width(4);
   cout.fill('0');
   cout << a << endl;

   return 0;
}