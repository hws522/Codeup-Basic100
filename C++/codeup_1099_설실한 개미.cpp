#include<iostream>
using namespace std;

int main()
{
    int arr[10][10] = {};
    int a = 1;
    int b = 1;

    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
            cin >> arr[i][j];

    for(int i = 0; i < 15; i++)
    {
        if(arr[a][b] == 0)
        {
            arr[a][b] = 9;
            b++;
        }

        else if(arr[a][b] == 1)
        {
            a++;
            b--;
            
            if(arr[a][b] == 2)
            {
                arr[a][b] = 9;
                break;
            }

            arr[a][b] = 9;
            b++; 
        }

        else if(arr[a][b] == 2)
        {
            arr[a][b] = 9;
            
            break;
        }
    }

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
             cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

