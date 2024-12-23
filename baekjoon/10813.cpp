#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N, M;

    cin >> N >> M;

    int ary[N];

    for(int ind = 0; ind < N; ind++)
    {
        ary[ind] = ind+1;
    }

    for(int ind = 0; ind < M; ind++)
    {
        int i = 0, j = 0;

        cin >> i >> j;

        int temp = ary[i-1];
        ary[i-1] = ary[j-1];
        ary[j-1] = temp;
    }

    for(int ind = 0; ind < N; ind++)
    {
        cout << ary[ind] << " ";
    }

    return 0;
}

// https://www.acmicpc.net/problem/10813
