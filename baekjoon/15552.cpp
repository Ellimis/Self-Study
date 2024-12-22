#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int T, a, b;

    cin >> T;

    for(int i = 0; i < T; i++) 
    {
        cin >> a >> b;
        cout << a+b << "\n";
    }

    return 0;
}

// https://www.acmicpc.net/problem/15552
