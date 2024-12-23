#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N;

    cin >> N;

    int ary[N];
    int v = 0;

    for(int i = 0; i < N; i++)
    {
        cin >> ary[i];
    }

    cin >> v;
    int cnt = 0;

    for(int i = 0; i < N; i++)
    {
        cnt += ((ary[i] == v)? 1 : 0);    
    }

    cout << cnt << "\n";

    return 0;
}

// https://www.acmicpc.net/problem/10807
