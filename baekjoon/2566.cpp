#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int arr[9][9];
    int max = 0;
    int mii = 0, mij = 0;

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            cin >> arr[i][j];
            
            if(max < arr[i][j])
            {
                max = arr[i][j];
                mii = i;
                mij = j;
            }
        }
    }

    cout << max << "\n" << mii+1 << " " << mij+1;

    return 0;
}

// https://www.acmicpc.net/problem/2566
