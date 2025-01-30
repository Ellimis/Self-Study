#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int M, N;

    cin >> M;
    cin >> N;

    int isSolo = -1;
    int sum = 0;
    int min = N;

    for(int i = M; i <= N; i++)
    {
        int sub = 0;

        for(int j = 1; j <= i; j++)
        {
            if(i%j == 0) sub += 1;
        }

        if(sub == 2)
        {
            if(isSolo == -1) isSolo = 1;
            if(min > i) min = i;
            sum += i;
        } 
    }

    if(isSolo == 1)
    {
        cout << sum << "\n" << min;
    }
    else cout << isSolo;

    return 0;
}

// https://www.acmicpc.net/problem/2581
