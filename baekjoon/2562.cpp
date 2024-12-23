#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int ary[9];

    for(int i = 0; i < 9; i++)
    {
        cin >> ary[i];
    }

    int index = 0;
    int max = 0;

    for(int i = 0; i < 9; i++)
    {
        if(ary[i] > max)
        {
            max = ary[i];
            index = i+1;
        }
    }

    cout << max << "\n" << index << "\n";
    
    return 0;
}

// https://www.acmicpc.net/problem/2562
