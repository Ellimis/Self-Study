#include <iostream>
#include <string>

using namespace std;

int main()
{
    string A, B;
    string tA, tB;
    int max = 0;

    cin >> A >> B;

    for(int j = 2; j >= 0; j--)
    {
        tA += A[j];
        tB += B[j];
    }

    if(stoi(tA) > stoi(tB)) max = stoi(tA);
    else max = stoi(tB);

    cout << max << "\n";

    return 0;
}

// https://www.acmicpc.net/problem/2908
