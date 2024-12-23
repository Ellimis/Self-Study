#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int ary[30];
    int no[30];
    int index = 0;

    for(int i = 0; i < 30; i++)
    {
        ary[i] = 0;
        no[i] = 0;
    }

    for(int i = 0; i < 28; i++)
    {
        cin >> index;
        ary[index-1] = 1;
    }

    index = 0;

    for(int i = 0; i < 30; i++)
    {
        if(ary[i] == 0)
        {
            no[index] = i+1;
            index += 1;
        }
    }

    for(int i = 0; i < index; i++)
    {
        cout << no[i] << "\n";
    }

    return 0;
}

// https://www.acmicpc.net/problem/5597
