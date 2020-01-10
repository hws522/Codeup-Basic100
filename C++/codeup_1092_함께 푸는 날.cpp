#include<iostream>

using namespace std;

int main()
{

    int a, b, c;
    int day = 1;

    cin >> a >> b >> c;

    for(int i = 0; ; i++)
    {
        if(day % a == 0 && day % b == 0)
            if(day % c == 0)
                break;

        day++;
    }

    cout << day << endl;

   return 0;
}

