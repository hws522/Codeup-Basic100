#include<iostream>
using namespace std;

int main()
{
    int n;
    int x, y;
    int arr[19][19] = {};

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        arr[x - 1][y - 1] = 1;
    }

    for(int i = 0; i < 19; i++)
    {
        for(int j = 0; j < 19; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
    }

    return 0;
}

/*
5
1 1
2 2
3 3
4 4
5 5
*/
