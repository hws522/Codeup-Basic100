#include<iostream>

using namespace std;

int main()
{
  int count = 0; 
  int sum = 0;
  int a;

  cin >> a;

  for(;;)
  {
      if(sum >= a)
         break;

      count++;
      sum += count;
      
  }

  cout << count << endl;



   return 0;
}

