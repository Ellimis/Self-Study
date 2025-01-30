#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    while(1)
    {
        int N;

        cin >> N;

        if(N == -1) break;

        int s[N];
        int idx = 0;
        int sum = 0;

        fill_n(s, N, 0);

        for(int i = 1; i < N; i++)
        {
            if(N%i == 0)
            {
                s[idx] = i;
                idx += 1;
                sum += i;
            }
        }

        if(sum == N)
        {
            cout << N << " = ";

            for(int i = 0; i < idx; i++)
            {
                cout << s[i];

                if(i+1 != idx)
                {
                    cout << " + ";
                }
            }

            cout << "\n";
        }
        else
        {
            cout << N << " is NOT perfect." << "\n";
        }
    }

    return 0;
}

// https://www.acmicpc.net/problem/9506
