#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int N;

    cin >> N;

    int min = 1000000;

    for(int i = 1; i < N; i++)
    {
        int sum = i;
        string tmp = to_string(i);

        for(int j = 0; j < tmp.length(); j++)
        {
            sum += tmp[j]-'0';
        }

        if((N == sum) && (min > sum)) min = i;
    }

    if(min == 1000000) cout << "0";
    else cout << min;

    return 0;
}

// https://www.acmicpc.net/problem/2231
