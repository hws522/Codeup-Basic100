#include<iostream>

using namespace std;

int main()
{
   
   int a;
   int sum = 0;

   cin >> a;

   for(int i = 0; i <= a; i++)
   {
      if(i % 2 == 1)
         continue;

      sum += i;
   }

   cout << sum << endl;



   return 0;
}

