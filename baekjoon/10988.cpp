#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int isF = 1;
    
    cin >> s;

    for(int i = 0; i < (s.length()/2); i++)
    {
        if(s[i] == s[s.length()-1-i])
        {
            isF = 1;
        }
        else 
        {
            isF = 0;
            break;
        }
    }

    cout << isF << "\n";

    return 0;
}

// https://www.acmicpc.net/problem/10988
