#include<iostream>
#include<string>

using namespace std;

int main()
{
   
   char arr[20] = {0,};

   cin >> arr;
   
   for(int i = 0; i < 20; i++)
   {
      if(arr[i] == 0)
         break;
      
      cout << "'" << arr[i] << "'" << endl;
   }
   
      


    return 0;

}