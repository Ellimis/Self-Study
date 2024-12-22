#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int a, b;

    do {
        cin >> a >> b;

        if(a == 0 && b == 0) break;
        cout << a + b << "\n";
    } while(1);

    return 0;
}

// https://www.acmicpc.net/problem/10952
