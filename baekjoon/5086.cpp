#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    while(1)
    {
        int A, B;

        cin >> A >> B;

        if(A == 0 && B == 0) break;
        else
        {
            cout << ((A > B && A%B == 0)? "multiple":((A < B && B%A == 0)? "factor":"neither"));
            cout << "\n";
        }
    }

    return 0;
}

// https://www.acmicpc.net/problem/5086
