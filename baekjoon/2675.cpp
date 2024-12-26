#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;

    cin >> T;

    int rep[T];
    string s[T];

    for(int i = 0; i < T; i++)
    {
        cin >> rep[i] >> s[i];

        for(int j = 0; j < s[i].length(); j++)
        {
            for(int h = 0; h < rep[i]; h++)
            {
                cout <<  s[i][j];
            }
        }

        cout << "\n";
    }

    return 0;
}

// https://www.acmicpc.net/problem/2675
