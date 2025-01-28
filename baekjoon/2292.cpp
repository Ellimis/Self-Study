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
        N -= 1;
        do
        {
            N -= 6*cnt;
            cnt += 1; 
        } while(N > 0);
    }
    
    cout << cnt;

    return 0;
}

// https://www.acmicpc.net/problem/2292
