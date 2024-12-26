#include <iostream>
#include <string>

using namespace std;

int main()
{
    int cnt, sum = 0;
    string s;

    cin >> cnt; 
    cin >> s;
    
    for(int i = 0; i < cnt; i++)
    {
        sum += s[i]-'0';
    }

    cout << sum << "\n";

    return 0;
}

// https://www.acmicpc.net/problem/11720
