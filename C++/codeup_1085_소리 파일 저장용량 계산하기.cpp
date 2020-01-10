#include<iostream>

using namespace std;

int main()
{
    int hz, bit, st, sec;
    int num = 8 * 1024 * 1024;

    long long int tmp;

    double result;

    cin >> hz >> bit >> st >> sec;

    result = ((double)hz * bit * st * sec) / num ;
    
    cout << fixed;
    cout.precision(1);
    
    cout << result << " MB" << endl;



   return 0;
}


