#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int T, a, b;

    cin >> T;

    for(int i = 1; i <= T; i++) 
    {
        cin >> a >> b;
        cout << "Case #" << i << ": " << a+b << "\n";
    }

    return 0;
}

// https://www.acmicpc.net/problem/11021