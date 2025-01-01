#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cro[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    string s;
    int cnt = 0;

    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        switch(s[i])
        {
            case 'c':
                if(s[i+1] != '\n' && (s[i+1] == '=' || s[i+1] == '-'))
                {
                    i += 1;
                    cnt += 1;
                }
            break;
            case 'd':
                if(s[i+1] != '\n' && s[i+1] == '-')
                {
                    i += 1;
                }
                else if(s[i+1] != '\n' && s[i+1] == 'z')
                {
                    if(s[i+2] != '\n' && s[i+2] == '=')
                    {
                        i += 2;
                    }
                }
                
                cnt += 1;
            break;
            case 'l':
                if(s[i+1] != '\n' && s[i+1] == 'j')
                {
                    i += 1;
                }

                cnt += 1;
            break;
            case 'n':
                if(s[i+1] != '\n' && s[i+1] == 'j')
                {
                    i += 1;
                }
                
                cnt += 1;
            break;
            case 's':
                if(s[i+1] != '\n' && s[i+1] == '=')
                {
                    i += 1;
                }
                
                cnt += 1;
            break;
            case 'z':
                if(s[i+1] != '\n' && s[i+1] == '=')
                {
                    i += 1;
                }
                
                cnt += 1;
            break;
            default:
                cnt += 1;
            break;
        }
    }

    cout << cnt;

    return 0;
}

// https://www.acmicpc.net/problem/2941
