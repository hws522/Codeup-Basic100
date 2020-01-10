#include<iostream>

using namespace std;

int main()
{
   
  char q;

  for(;;)
  {
      cin >> q;

      if(q == 'q')
      {
         cout << q << endl;
         break;
      }

      cout << q << endl;
  }



   return 0;
}

