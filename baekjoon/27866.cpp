#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S;
    int i;

    getline(cin, S);
    cin >> i;

    cout << S[i-1] << "\n";

    return 0;
}

// https://www.acmicpc.net/problem/27866
