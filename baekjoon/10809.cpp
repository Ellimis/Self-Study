#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int cnt[26];

    fill_n(cnt, 26, -1);
    getline(cin, s);

    for(int i = 0; i < s.length(); i++)
    {
        if(cnt[s[i]-'a'] == -1) cnt[s[i]-'a'] = i;
    }

    for(int i = 0; i < 26; i++)
    {
        cout << cnt[i] << " ";
    }

    return 0;
}

// https://www.acmicpc.net/problem/10809

// A B C D E
// F G H I J
// K L M N O
