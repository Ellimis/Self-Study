#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int T;

    cin >> T;

    int C[T];

    for(int i = 0; i < T; i++)
    {
        cin >> C[i];
    }

    int q = 25, d = 10, n = 5, p = 1;

    for(int i = 0; i < T; i++)
    {
        cout << C[i]/q << " ";
        cout << (C[i]%q)/d << " ";
        cout << ((C[i]%q)%d)/n << " ";
        cout << (((C[i]%q)%d)%n)/p << "\n";
    }

    return 0;
}

// https://www.acmicpc.net/problem/2720
