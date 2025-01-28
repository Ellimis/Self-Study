#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int cnt = 1;
    long N;

    cin >> N;

    if(N != 1)
    {
        do
        {
            N -= cnt;
            cnt += 1; 
        } while(N > cnt);
    }
    
    if(cnt%2) cout << cnt-N+1 << "/" << N;
    else cout << N << "/" << cnt-N+1;

    return 0;
}

// https://www.acmicpc.net/problem/1193
