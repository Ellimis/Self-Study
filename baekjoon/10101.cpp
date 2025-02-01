#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int A, B, C;

    cin >> A;
    cin >> B;
    cin >> C;

    if(A == 60 && B == 60 && C == 60) cout << "Equilateral";
    else if(((A+B+C) == 180) && ((A == B) || (B == C) || (A == C))) cout << "Isosceles";
    else if(((A+B+C) == 180) && (A != B != C)) cout << "Scalene";
    else if((A+B+C) != 180) cout << "Error";

    return 0;
}

// https://www.acmicpc.net/problem/10101
