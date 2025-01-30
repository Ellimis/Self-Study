#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    long A, B, V;

    cin >> A >> B >> V;

    long w = (V-A)/(A-B);

    if((w*(A-B)+A) >= V) cout << w+1; 
    else cout << w+2; 

    return 0;
}

// https://www.acmicpc.net/problem/2869
