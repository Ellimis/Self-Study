#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N;

    cin >> N;

    for(int j = 1; j <= N; j++)
    {
        for(int i = 0; i < j; i++) cout << "*";

        cout << "\n";
    }

    return 0;
}

// https://www.acmicpc.net/problem/2438
