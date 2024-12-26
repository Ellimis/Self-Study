#include <iostream>
#include <string>

using namespace std;

int main()
{
    int cnt;

    cin >> cnt;
    string s[cnt];
    
    for(int i = 0; i < cnt; i++)
    {
        cin >> s[i];
        cout << s[i][0] << s[i][s[i].length()-1] << "\n";
    }

    return 0;
}

// https://www.acmicpc.net/problem/9086
