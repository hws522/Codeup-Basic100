#include<iostream>

using namespace std;

int main()
{
   
   int a, count;

   cin >> a;

   count = a;

   for(int i = 0; i < a; i++)
   {
      cout << count << endl;
      count--;
   }


   return 0;
}

