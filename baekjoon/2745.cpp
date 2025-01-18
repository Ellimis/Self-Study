#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    string N;
    int B;
    long hap = 0;

    cin >> N >> B;

    for(int i = 0; i < N.length(); i++)
    {
        int x = pow(B, N.length()-1-i);
        
        if('1' <= N[i] && N[i] <= '9')
        {
            hap += (N[i]-'0') * x;
        }
        else if('A' <= N[i] && N[i] <= 'Z')
        {
            hap += ((N[i]-'A') + 10) * x;
        }
    }

    cout << hap;

    return 0;
}

// https://www.acmicpc.net/problem/2745
// 첫번째 계산부터 B의 0승이라고 생각해서 계속 틀린 거였음.,,
