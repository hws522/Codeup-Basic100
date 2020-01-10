#include<iostream>

using namespace std;

int main()
{
    int n , arr[23] = {};
    int a;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a;
        arr[a - 1] += 1;
    }

    for(int i = 0; i < 23; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

