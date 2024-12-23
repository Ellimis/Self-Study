#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int ary[10];
    int i;

    for(i = 0; i < 10; i++)
    {
        cin >> ary[i];
    }

    int n[42] = {0};
    
    for(i = 0; i < 10; i++)
    {
        n[ary[i]%42] += 1;
    }

    int cnt = 0;

    for(i = 0; i < 42; i++)
    {
        if(n[i] != 0) cnt++;
    }

    cout << cnt << "\n";

    return 0;
}

// https://www.acmicpc.net/problem/3052
