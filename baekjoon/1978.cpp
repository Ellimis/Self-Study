#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int N;

    cin >> N;

    int s[N];

    for(int i = 0; i < N; i++)
    {
        cin >> s[i];
    }
    
    int cnt = 0;

    for(int i = 0; i < N; i++)
    {
        if(s[i] != 1)
        {
            int sub = 0;
            for(int j = 1; j <= s[i]; j++)
            {
                if(s[i]%j == 0) sub += 1;
            }

            if(sub == 2) cnt += 1;
        }
    }

    cout << cnt;

    return 0;
}

// https://www.acmicpc.net/problem/1978
