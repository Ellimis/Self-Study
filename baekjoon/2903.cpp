#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int N, cnt = 4, w = 1;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        w *= 2;
        int p = pow(4, i+1);

        for(int j = 0; j < w+1; j++)
        {
            if(j%2) cnt += p/w+1;
            else cnt += p/w-w/2;
        }
    }

    cout << cnt;

    return 0;
}

// https://www.acmicpc.net/problem/2903
