#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N;

    cin >> N;

    float score[N];
    float max = .0f;    
    int i;

    for(i = 0; i < N; i++)
    {
        cin >> score[i];
        max = (score[i] > max)? score[i] : max;
    }

    float sum = .0f;
    
    for(i = 0; i < N; i++)
    {
        sum += score[i]/max*100.0f;
    }

    cout << sum/N << "\n";

    return 0;
}

// https://www.acmicpc.net/problem/1546
