#include<iostream>

using namespace std;

int main()
{
   
   long long int a, b, c;
   int sum;
   double average;

   cin >> a >> b >> c;
   sum = a + b + c;
   average = (double)sum/3;

   cout << sum << endl;

   cout <<fixed;
   cout.precision(1);
   cout << average << endl;

   

   return 0;
}
