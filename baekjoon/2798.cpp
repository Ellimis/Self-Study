#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int N, M;

    cin >> N >> M;

    int card[N];

    for(int i = 0; i < N; i++)
    {
        cin >> card[i];
    }

    int max = 0;

    for(int i = 0; i < N; i++)
    {
        for(int j = i+1; j < N; j++)
        {
            for(int h = j+1; h < N; h++)
            {
                if((max < card[i]+card[j]+card[h]) && (card[i]+card[j]+card[h] <= M)) 
                  max = card[i]+card[j]+card[h]; 
            }
        }
    }

    cout << max;

    return 0;
}

// https://www.acmicpc.net/problem/2798
