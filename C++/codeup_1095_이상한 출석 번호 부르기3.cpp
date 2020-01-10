#include<iostream>
using namespace std;

int main()
{
    int n;
    int a = 0;
    int result;

    cin >> n;

    int *arr = new int[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 1; i < n; i++)
    {
        if(arr[a] <= arr[i])
            result = arr[a];

        else
        {
            a = i;
            result = arr[i];
        }
    }

    cout << result << endl;

    return 0;
}

/*
10
10 4 2 3 6 6 7 9 8 5
*/
