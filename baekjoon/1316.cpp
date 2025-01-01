#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int cnt;

    cin >> cnt;

    string words[cnt];

    for(int i = 0; i < cnt; i++)
    {
        cin >> words[i];
    }

    int sum = 0;

    for(int i = 0; i < cnt; i++)
    {
        int isGroup = 1;

        for(int j = 0; j < words[i].length(); j++)
        {
            for(int h = j; h < words[i].length(); h++)
            {
                if(j != h && ((h-j) > 1))
                {
                    if(words[i][h] == words[i][j])
                    {
                        char temp = words[i][j];
                        for(int t = j; t <= h; t++)
                        {
                            if(temp != words[i][t])
                            {
                                isGroup = 0;
                            }
                        }
                    }
                }
            }
        }

        sum += isGroup;
    }

    cout << sum;

    return 0;
}

// https://www.acmicpc.net/problem/1316
