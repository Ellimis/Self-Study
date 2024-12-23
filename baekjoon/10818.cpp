#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N;
    
    cin >> N;

    int ary[N];
    
    for(int i = 0; i < N; i++)
    {
        cin >> ary[i];
    }
    
    int max = ary[0], min = ary[0];

    for(int i = 0; i < N; i++)
    {
        if(ary[i] > max) max = ary[i];
        if(ary[i] < min) min = ary[i];
    }

    cout << min << " " << max << "\n";
    
    return 0;
}

// https://www.acmicpc.net/problem/10818
