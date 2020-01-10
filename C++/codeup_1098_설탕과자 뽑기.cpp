#include<iostream>
using namespace std;

int main()
{
    int w, h;
    int n;
    int l, d, x, y;

    cin >> h >> w;

    int **arr = new int *[h];
    for(int i = 0; i < h; i++)
        arr[i] = new int[w];

    for(int i = 0; i < h; i++)
        for(int j = 0; j < w; j++)
            arr[i][j] = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> l >> d >> x >> y;

        for(int j = 0; j < l; j++)
        {
            if(d == 0)
            {
                arr[x - 1][y - 1] = 1;
                y++;
            }
            else
            {
                arr[x - 1][y - 1] = 1;
                x++;
            }
        }
    }

for(int i = 0; i < h; i++)
{
    for(int j = 0; j < w; j++)
    {
        cout << arr[i][j] << " ";
    }

    cout << endl;
}
    return 0;
}

/*
가로세로
막대개수
막대길이 방향 좌표

5 5 
3
2 0 1 1
3 1 2 3
4 1 2 5
*/
