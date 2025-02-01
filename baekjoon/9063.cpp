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
    
    int s[N][2];

    for(int i = 0; i < N; i++)
    {
        cin >> s[i][0] >> s[i][1];
    }

    if(N == 1) cout << "0";
    else
    {
        int minX = 10000, maxX = -10000;
        int minY = 10000, maxY = -10000;

        for(int i = 0; i < N; i++)
        {
            if(minX > s[i][0]) minX = s[i][0];
            if(maxX < s[i][0]) maxX = s[i][0];
            if(minY > s[i][1]) minY = s[i][1];
            if(maxY < s[i][1]) maxY = s[i][1];
        }

        cout << (maxX-minX)*(maxY-minY);
    }

    return 0;
}

// https://www.acmicpc.net/problem/9063
