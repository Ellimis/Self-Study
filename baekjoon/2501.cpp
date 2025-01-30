#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int N, K;

    cin >> N >> K;

    int min = N;

    for(int i = 1; i <= N; i++)
    {
        if(K != 0 && (N%i) == 0)
        {
            min = i;
            K -= 1;
        }
    }

    if(K != 0) cout << 0;
    else cout << min;

    return 0;
}

// https://www.acmicpc.net/problem/2501
