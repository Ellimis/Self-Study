#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int s[4][2];
    int isX = 0, isY = 0;

    fill(s[0], s[4], 0);

    for(int i = 0; i < 3; i++)
    {
        cin >> s[i][0] >> s[i][1];
    }

    s[3][0] += s[0][0];
    s[3][1] += s[0][1];
    
    if(s[3][0] == s[1][0]) s[3][0] = s[2][0];
    else if(s[3][0] == s[2][0]) s[3][0] = s[1][0];
    
    if(s[3][1] == s[1][1]) s[3][1] = s[2][1];
    else if(s[3][1] == s[2][1]) s[3][1] = s[1][1];

    cout << s[3][0] << " " << s[3][1];

    return 0;
}

// https://www.acmicpc.net/problem/3009
