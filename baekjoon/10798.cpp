#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	  cin.tie(NULL);

    char arr[5][15];
    int maxLeng = 0;

    fill(arr[0], arr[5], ' ');

    for(int i = 0; i < 5; i++)
    {
        string s;
        
        cin >> s;

        for(int j = 0; j < s.length(); j++)
        {
            arr[i][j] = s[j];
        }

        if(maxLeng < s.length())
        {
            maxLeng = s.length();
        }
    }

    for(int i = 0; i < maxLeng; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(arr[j][i] != ' ')
            {
                cout << arr[j][i];
            }
        }
    }
    
    return 0;
}

// https://www.acmicpc.net/problem/10798
