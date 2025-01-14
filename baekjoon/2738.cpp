#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int N, M;
    int i, j;

    cin >> N >> M;

    int A[N][M], B[N][M], fin[N][M];

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }       
    }
    
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            cin >> B[i][j];
        }       
    }

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            fin[i][j] = A[i][j] + B[i][j];
        }       
    }
    
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            cout << fin[i][j] << " ";
        }       

        cout << "\n";
    }

    return 0;
}

// https://www.acmicpc.net/problem/2738
