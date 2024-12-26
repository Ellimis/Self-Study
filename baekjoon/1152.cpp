#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int cnt = 0;
    int isNotBlank = 0;

    getline(cin, s);

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != ' ' && isNotBlank == 0) 
        {
            isNotBlank = 1;
        }

        if(s[i] == ' ' && isNotBlank == 1)
        {
            cnt += 1;
            isNotBlank = 0;
        }
    }
    
    if(s[s.length()-1] != ' ') cnt += 1;

    cout << cnt << "\n";
    
    return 0;
}

// https://www.acmicpc.net/problem/1152
