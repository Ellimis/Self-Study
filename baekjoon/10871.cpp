#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N = 0, X;

    cin >> N >> X;

    int ary[N];

    for(int i = 0; i < N; i++)
    {
        cin >> ary[i];
    }

    for(int i = 0; i < N; i++)
    {
        if(ary[i] < X) cout << ary[i] << " ";
    }

    return 0;
}

// https://www.acmicpc.net/problem/10871
