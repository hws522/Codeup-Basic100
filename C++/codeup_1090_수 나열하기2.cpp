#include<iostream>

using namespace std;

int main()
{

    long long int a;
    int r, n;

    cin >> a >> r >> n;


    for(int i = 1; i < n; i++)
    {
       a *= r;
    }

    cout << a << endl;

   return 0;
}


