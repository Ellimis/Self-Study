#include <iostream>

using namespace std;

int main()
{
    long X = 0;
    int N;

    cin >> X;
    cin >> N;

    int a, b;

    for(int i = 0; i < N; i++)
    {
        cin >> a >> b;
        X -= a*b;
    }

    if(X == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

// https://www.acmicpc.net/problem/25304
