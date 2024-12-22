#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    
    cin >> A >> B >> C;

    if(A == B)
    {
        if(B == C) cout << 10000+A*1000 << endl;
        else cout << 1000+A*100 << endl;
    }
    else
    {
        if(A == C || B == C) cout << 1000+C*100 << endl;
        else cout << ((A>B)? ((A>C)? A*100:C*100):((B>C)? B*100:C*100));
    }

    return 0;
}

// https://www.acmicpc.net/problem/2480
