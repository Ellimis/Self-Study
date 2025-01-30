#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int N, d = 2;

    cin >> N;

    while(N > 1)
    {
        if(N%d == 0) 
        {
            cout << d << "\n";
            N /= d;
            d = 2;
        }
        else d += 1;
    }

    return 0;
}

// https://www.acmicpc.net/problem/11653
