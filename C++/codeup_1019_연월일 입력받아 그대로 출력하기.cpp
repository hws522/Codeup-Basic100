#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
   int a ,b, c;
   char x;
   cin >> a >> x >> b >> x >> c;
   
   cout.width(4);
   cout.fill('0');
   cout << a << x;
   cout.width(2);
   cout.fill('0');
   cout << b;
   cout << x;
   cout.width(2);
   cout.fill('0');
   cout << c << endl;



    return 0;

}

