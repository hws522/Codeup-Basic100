#include<iostream>

using namespace std;

int main()
{
    int w , h, b;
    int num = 8 * 1024 * 1024;

    double result;

    cin >> w >> h >> b;

    result = ((double)w * h * b) / num ;
    
    cout << fixed;
    cout.precision(2);
    
    cout << result << " MB" << endl;



   return 0;
}

