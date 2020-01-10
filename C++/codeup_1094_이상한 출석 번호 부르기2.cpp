#include<iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int *arr = new int[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = n; i > 0; i--)
    {
        cout << arr[i - 1] << " ";
    }

    cout << endl;

    return 0;
}

/*
10
10 4 2 3 6 6 7 9 8 5
*/
