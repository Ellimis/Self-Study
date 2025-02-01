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
        int A, B, C;

        cin >> A >> B >> C;

        if(A == 0 && B == 0 && C == 0) break;
        
        int isInvalid = 0;

        if(A >= B && A >= C && A < (B+C)) isInvalid = 1;
        if(B >= A && B >= C && B < (A+C)) isInvalid = 1;
        if(C >= A && C >= B && C < (A+B)) isInvalid = 1;
        
        if(isInvalid)
        {
            if(A == B && A == C) cout << "Equilateral";
            else if((A == B) || (B == C) || (A == C)) cout << "Isosceles";
            else if(A != B != C) cout << "Scalene";
        }
        else cout << "Invalid";

        cout << "\n";
    }

    return 0;
}

// https://www.acmicpc.net/problem/5073
