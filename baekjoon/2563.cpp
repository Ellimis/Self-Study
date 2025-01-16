#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int cnt;

    cin >> cnt;

    int s[cnt][2];
    int c[100][100];

    fill(c[0], c[100], 0);

    for(int i = 0; i < cnt; i++)
    {
        cin >> s[i][0] >> s[i][1];
    }

    for(int i = 0; i < cnt; i++)
    {
        for(int j = s[i][0]-1; j < s[i][0]+9; j++)
        {
            for(int h = s[i][1]-1; h < s[i][1]+9; h++)
            {
                c[j][h] = 1;
            }
        }
    }

    int hap = 0;

    for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            hap += c[i][j];
        }
    }

    cout << hap;

    return 0;
}

// https://www.acmicpc.net/problem/2563
