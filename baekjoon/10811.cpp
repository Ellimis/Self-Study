#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N, M;

    cin >> N >> M;

    int ary[N];
    int temp[N];
    int ind = 0, h = 0;

    for(ind = 0; ind < N; ind++)
    {
        ary[ind] = ind+1;
        temp[ind] = ind+1;
    }

    for(ind = 0; ind < M; ind++)
    {
        int i = 0, j = 0;

        cin >> i >> j;

        int index = i-1;

        for(h = j-1; h >= i-1; h--)
        {
            temp[index] = ary[h];
            index += 1;
        }

        for(h = 0; h < N; h++)
        {
            ary[h] = temp[h];
        }
    }

    for(ind = 0; ind < N; ind++)
    {
        cout << temp[ind] << " ";
    }

    return 0;
}

// https://www.acmicpc.net/problem/10811
